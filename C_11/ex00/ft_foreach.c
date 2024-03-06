/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:41:50 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:16:39 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		(*f)(tab[i++]);
}

/* #include <stdio.h>

void	printnum(int n)
{
	printf("%d, ", n);
}

int	main()
{
	int	n[4] = {1, 2, 3, 4};
	ft_foreach(n, 4, &printnum);
} */
