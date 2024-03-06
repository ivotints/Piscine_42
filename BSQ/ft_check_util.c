/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:19:27 by onovytsk          #+#    #+#             */
/*   Updated: 2023/12/06 17:22:54 by onovytsk         ###   ########.fr       */
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

int	ft_check_rows(int col_num, char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	if (i - 1 == col_num)
		return (0);
	return (1);
}

int	ft_check_every_row(char **map)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (map[i][j])
		j++;
	g_col_amount = j;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && (map[i][j] == g_blank || map[i][j] == g_obstacle))
			j++;
		if (g_col_amount != j)
			return (1);
		i++;
	}
	return (0);
}

void	freememory2(char **dp)
{
	int	i;

	i = 0;
	while (dp[i])
	{
		free(dp[i]);
		i++;
	}
	free(dp);
}

int	ft_check2(char *argv)
{
	g_map = ft_split(argv, "\n");
	ft_check_first_row_return_col_num(g_map[0]);
	if (ft_check_rows(g_row_amount, g_map) || ft_check_every_row(g_map))
	{
		freememory2(g_map);
		return (0);
	}
	g_map = g_map + 1;
	return (1);
}
