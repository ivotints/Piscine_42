/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:13:38 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/28 19:00:59 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	k;
	int	*dest;
	int	*d;
	int	i;

	k = max - min;
	if (k <= 0)
	{
		*range = 0;
		return (0);
	}
	d = ((dest = (int *)malloc(k * sizeof(int))));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (k > i)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (k);
}
