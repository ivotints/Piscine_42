/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:03:49 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/22 17:46:38 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexadecimal(unsigned long long nb, int first)
{
	char	*all;

	all = "0123456789abcdef";
	if (nb < 16 && first == 1)
		write(1, &"0", 1);
	if (nb >= 16)
	{
		hexadecimal(nb / 16, 0);
		hexadecimal(nb % 16, 0);
	}
	else
		write(1, &all[nb], 1);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	write(1, &"0", 1);
	while (i++ < 15)
	{
		if (tmp < 16)
			write(1, "0", 1);
		tmp /= 16;
	}
	hexadecimal(addr, 0);
}

void	ft_print_arr(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i < 16)
	{
		i++;
		if (i % 2 == 0)
			write(1, &" ", 1);
		if (i < size)
			hexadecimal((unsigned long long)*(c + i), 1);
		else if (i != 16)
			write(1, &"  ", 2);
	}
	i = -1;
	while (i < size - 1)
	{
		i++;
		if (*(c + i) <= 31 || *(c + i) >= 127)
			write(1, ".", 1);
		else
			write(1, (c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	currentsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			currentsize = 16;
		else
			currentsize = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		write(1, ":", 1);
		ft_print_arr(c + (i * 16), currentsize);
		write(1, "\n", 1);
		i++;
	}
	return (addr);
}
