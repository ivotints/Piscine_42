/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:26:23 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 21:47:43 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb >= 1)
		res *= nb--;
	return (res);
}

/* #include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(10));
} */