/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:54:42 by onovytsk          #+#    #+#             */
/*   Updated: 2023/12/06 18:08:33 by onovytsk         ###   ########.fr       */
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

void	input_me(void)
{
	char	buf;
	char	*big;
	int		readed;
	int		counter;

	counter = 0;
	big = (char *)malloc(500000000);
	readed = read(0, &buf, 1);
	while (readed)
	{
		big[counter] = buf;
		readed = read(0, &buf, 1);
		counter++;
	}
	big[counter] = '\0';
	if (ft_check2(big))
		solve_me();
	else
		write(2, "map error\n", 10);
	free(big);
}
