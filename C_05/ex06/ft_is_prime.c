/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:27:06 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 21:47:13 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

/* #include <stdio.h>
int	main()
{
	printf("%d", ft_is_prime(-1));
	printf("%d", ft_is_prime(0));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(3));
	printf("%d", ft_is_prime(4));
} */