/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:44:24 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 18:54:29 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
		c += 256;
	if (c >= 16)
	{
		ft_put_hex(c / 16, 1);
		ft_put_hex(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hex(j, 0);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/* 
int main ()
{
	int i = 1;
	int j = 0;
	char c[500];
	while (i < 256)
		{
		c[j] = i;
		j++;
		i++;
		}
		ft_putstr_non_printable(c);
} */