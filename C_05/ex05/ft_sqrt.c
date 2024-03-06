/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:26:59 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 21:47:19 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i != nb / i && i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/* #include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(121));
} */