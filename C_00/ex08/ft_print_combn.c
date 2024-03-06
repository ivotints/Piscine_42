/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:24:55 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/18 13:11:12 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int nb, int *arr, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft_print_combn_inc(int nb, int *arr)
{
	int	i;
	int	max;

	i = nb - 1;
	max = 9;
	while (arr[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	arr[i] += 1;
	while (i < nb)
	{
		arr[i + 1] = arr[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < nb)
	{
		arr[i] = i;
		i++;
	}
	ft_putout(nb, arr, 0);
	while (arr[0] != 10 - nb || arr[nb - 1] != 9)
	{
		if (arr[nb - 1] != 9)
		{
			arr[nb - 1] += 1;
		}
		else
		{
			ft_print_combn_inc(nb, arr);
		}
		ft_putout(nb, arr, 1);
	}
}
/* 
void	main(void)
{
	ft_print_combn(5);
}
 */