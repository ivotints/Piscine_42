/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:37:41 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/23 19:23:19 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(long int nbr, char *base, int base_len)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr < base_len)
	{
		c = base[nbr];
		write(1, &c, 1);
	}
	else
	{
		ft_print(nbr / base_len, base, base_len);
		ft_print(nbr % base_len, base, base_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	j;
	int	i;

	base_len = 0;
	while (base[base_len] && base[base_len] != '+' && base[base_len] != '-')
		base_len++;
	if (base_len < 2 || base[base_len] == '+' || base[base_len] == '-')
		return ;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && j < base_len)
			j++;
		if (base[i] == base [j])
			return ;
		i++;
	}
	ft_print(nbr, base, base_len);
}

/* int	main()
{
	char base[] = "012345678!";
	int i = 897;

	ft_putnbr_base(i, base);
} */