/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_me.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:28:55 by onovytsk          #+#    #+#             */
/*   Updated: 2023/12/06 17:31:39 by onovytsk         ###   ########.fr       */
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

int	**make_dp(void)
{
	int	**dp;
	int	i;
	int	j;

	i = 0;
	dp = (int **)malloc(g_row_amount * sizeof(int *));
	while (i < g_row_amount)
	{
		dp[i] = (int *)malloc(g_col_amount * sizeof(int));
		i++;
	}
	i = 0;
	j = 0;
	while (i < g_row_amount)
	{
		while (j < g_col_amount)
		{
			dp[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	return (dp);
}
