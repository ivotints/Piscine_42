/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:40:44 by onovytsk          #+#    #+#             */
/*   Updated: 2023/12/06 16:16:49 by onovytsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "bsq.h"

typedef struct coordiante
{
	int	i;
	int	j;
}	t_cor;

void	freememory(int **dp)
{
	int	i;

	i = 0;
	while (i < g_row_amount)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
}

void	replacesquare(int maxi, int maxj, int maxsize)
{
	int	i;
	int	j;

	i = maxi - maxsize + 1;
	while (i <= maxi)
	{
		j = maxj - maxsize + 1;
		while (j <= maxj)
		{
			g_map[i][j] = g_fill;
			j++;
		}
		i++;
	}
}

void	printmap(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < g_row_amount)
	{
		j = 0;
		while (j < g_col_amount)
		{
			write(1, &g_map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	g_map = g_map - 1;
	freememory2(g_map);
}

void	update(int **dp, t_cor coord, int *maxsize, t_cor *maxcoord)
{
	int	i;
	int	j;

	i = coord.i;
	j = coord.j;
	if (g_map[i][j] != g_obstacle)
	{
		if (i == 0 || j == 0)
			dp[i][j] = 1;
		else
		{
			dp[i][j] = 1 + dp[i - 1][j];
			if (dp[i][j - 1] < dp[i - 1][j])
				dp[i][j] = 1 + dp[i][j - 1];
			if (dp[i - 1][j - 1] + 1 < dp[i][j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
		}
		if (dp[i][j] > *maxsize)
		{
			*maxsize = dp[i][j];
			maxcoord->i = i;
			maxcoord->j = j;
		}
	}
}

void	solve_me(void)
{
	int		**dp;
	int		maxsize;
	t_cor	maxcoord;
	t_cor	currentcoord;

	maxcoord.i = 0;
	maxcoord.j = 0;
	maxsize = 0;
	dp = make_dp();
	currentcoord.i = 0;
	currentcoord.j = 0;
	while (currentcoord.i < g_row_amount)
	{
		update(dp, currentcoord, &maxsize, &maxcoord);
		currentcoord.j++;
		if (currentcoord.j == g_col_amount)
		{
			currentcoord.j = 0;
			currentcoord.i++;
		}
	}
	replacesquare(maxcoord.i, maxcoord.j, maxsize);
	freememory(dp);
	printmap();
}
