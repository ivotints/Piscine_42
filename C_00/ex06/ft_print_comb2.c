/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:42:45 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/16 17:26:31 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char a)
{
	write (1, &a, 1);
}

void	tranclate(int i)
{
	int	ten;
	int	one;

	if (i < 10)
	{
		print_char('0');
		print_char(i + 48);
	}
	else
	{
		ten = i / 10;
		one = i % 10;
		print_char(ten + 48);
		print_char(one + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			tranclate(a);
			print_char(' ');
			tranclate(b);
			if (a < 98)
			{
				print_char(',');
				print_char(' ');
			}
			b++;
		}
		a++;
	}
}
/* 
void	print_chars(char a, char b, char c, char d)
{
	if (a == c && b == d)
	{	
	}
	else 
	{
	print_char(a + 48);
	print_char(b + 48);
	write (1, &" ", 1);
	print_char(c + 48);
	print_char(d + 48);
	
	write (2, &",", 1);
	write (1, &" ", 1);
	}
}
void	fr_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int d;

	a = 0;
	
	while (a <= 9)
	{
		b = 0;
		while (b <=9)
		{
			c=0;
			while (c <= 9)
			{
				d=0;
				while (d <= 9)
				{
					print_chars(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
} */
/* 
void	main(void)
{
	ft_print_comb2();
}
 */