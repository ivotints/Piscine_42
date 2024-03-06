/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:26:39 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 21:47:34 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power-- >= 1)
		res *= nb;
	return (res);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 4));
} */