/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:57:27 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/06 17:57:05 by onovytsk         ###   ########.fr       */
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

int		g_row_amount;
int		g_col_amount;
char	g_blank;
char	g_obstacle;
char	g_fill;
char	**g_map;

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			if (ft_check(argv[i]))
				solve_me();
			else
				write(2, "map error\n", 10);
			i++;
		}
	}
	else
	{
		input_me();
	}
	return (0);
}
