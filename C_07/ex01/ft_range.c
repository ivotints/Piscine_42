/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:30:36 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/03 15:53:28 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	dest = 0;
	i = min;
	if (max - min <= 0)
		return (dest);
	dest = malloc((max - min) * sizeof(int));
	while (i < max)
	{
		dest[i - min] = i;
		i++;
	}
	return (dest);
}
