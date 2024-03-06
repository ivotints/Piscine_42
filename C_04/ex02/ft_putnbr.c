/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 01:02:47 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/23 01:32:01 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		c = 48 + nb;
		write(1, &c, 1);
	}
	else if (1)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/* int main()
{
	int i;

	i = -2147483648;
	ft_putnbr(i);
	i = -2147483647;
	ft_putnbr(i);
	i = 0;
	ft_putnbr(i);
	i = 1;
	ft_putnbr(i);
	i = -1;
	ft_putnbr(i);
	i = 1000;
	ft_putnbr(i);
	i = 2147483647;
	ft_putnbr(i);
	i = -2147483648;
	ft_putnbr(i);
	i = -2147483648;
	ft_putnbr(i);
	i = -2147483648;
	ft_putnbr(i);
} */