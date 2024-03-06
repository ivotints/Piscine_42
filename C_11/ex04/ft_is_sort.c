/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:15:34 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:15:36 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	check1;
	int	check2;

	check1 = 0;
	check2 = 0;
	i = 0;
	while (i < length - 1)
	{
		if (!((*f)(tab[i], tab[i + 1]) <= 0))
			check1++;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (!((*f)(tab[i], tab[i + 1]) >= 0))
			check2++;
		i++;
	}
	if (check1 == 0 || check2 == 0)
		return (1);
	return (0);
}

/*#include <stdio.h>

int	compare(int a, int b)
{
	return (a - b);
}

int	main()
{
	int	a[4] = {3, 6, 8, 9};
	printf("%d\n", ft_is_sort(a, 4, &compare));
	int	b[4] = {9, 8, 6, 3};
	printf("%d\n", ft_is_sort(b, 4, &compare));
	int	c[4] = {3, 6, 9, 8};
	printf("%d\n", ft_is_sort(c, 4, &compare));
	int	d[4] = {9, 8, 4, 5};
	printf("%d\n", ft_is_sort(d, 4, &compare));
	int	e[4] = {1, 1, 1, 1};
	printf("%d\n", ft_is_sort(e, 4, &compare));
	int	f[13] = {1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7};
	printf("%d\n", ft_is_sort(f, 13, &compare));
}*/
