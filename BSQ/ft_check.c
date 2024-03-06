/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:31:00 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/06 15:54:14 by onovytsk         ###   ########.fr       */
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

int	ft_chars(char *argv)
{
	char	b;
	int		fd;
	int		readed;
	int		count;

	fd = open(argv, O_RDONLY);
	readed = read(fd, &b, 1);
	count = 0;
	while (readed)
	{
		count++;
		readed = read(fd, &b, 1);
	}
	close(fd);
	return (count);
}

int	ft_openable(char *argv)
{
	int	fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	close(fd);
	return (1);
}

char	*ft_make(int size, char *argv)
{
	char	*buf;
	int		fd;

	buf = (char *)malloc((size + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);
	fd = open(argv, O_RDONLY);
	read(fd, buf, size);
	buf[size] = '\0';
	close(fd);
	return (buf);
}

void	ft_check_first_row_return_col_num(char *row)
{
	int		i;
	char	*nbr;

	i = 0;
	while (row[i])
		i++;
	g_fill = row[i - 1];
	g_obstacle = row[i - 2];
	g_blank = row[i - 3];
	nbr = (char *)malloc(i - 2);
	ft_strncpy(nbr, row, i - 3);
	if (g_fill != g_obstacle && g_fill != g_blank && g_blank != g_obstacle)
		g_row_amount = ft_atoi(nbr);
	free(nbr);
}

// returns 1 if everything OK
int	ft_check(char *argv)
{
	char	*make;

	if (!(ft_openable(argv)))
		return (0);
	make = ft_make(ft_chars(argv), argv);
	g_map = ft_split(make, "\n");
	free(make);
	ft_check_first_row_return_col_num(g_map[0]);
	if (ft_check_rows(g_row_amount, g_map) || ft_check_every_row(g_map))
	{
		freememory2(g_map);
		return (0);
	}
	g_map = g_map + 1;
	return (1);
}
