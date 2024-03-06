/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:06 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/18 17:37:05 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h>

void    main(void)
{
	int a = 11;
	int b = 2;

	printf("%d, %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d \n", a, b);
} */