/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:15:11 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:15:14 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	ret = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		ret[i] = (*f)(tab[i]);
		i++;
	}
	return (ret);
}

/*#include <stdio.h>

int	printnum(int n)
{
	int	n2;
	n2 = n+1;
	return (n2);
}

int	main()
{
	int	i = 0;
	int	n[4] = {1, 2, 3, 4};
	int	*r;
	r = ft_map(n, 4, printnum);
	printf("%d %d %d %d\n", n[0], n[1], n[2], n[3]);
	printf("%d %d %d %d\n", r[0], r[1], r[2], r[3]);
	free (r);
}*/
