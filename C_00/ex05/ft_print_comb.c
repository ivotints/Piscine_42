/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:38:51 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/18 12:52:08 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char a)
{
	write (1, &a, 1);
}

void	print_chars(char a, char b, char c)
{
	print_char(a + 48);
	print_char(b + 48);
	print_char(c + 48);
	if (a == 7 && b == 8 && c == 9)
	{
		return ;
	}
	write (2, &",", 1);
	write (1, &" ", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_chars(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/* 
void	main(void)
{
	ft_print_comb();
}
 */