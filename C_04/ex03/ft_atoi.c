/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:57:21 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/23 16:37:11 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaces(char *str, int *i)
{
	int	sign;
	int	j;

	j = 0;
	sign = 1;
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
		j++;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			sign = -sign;
		j++;
	}
	*i = j;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	number;
	int	i;
	int	sign;

	number = 0;
	sign = spaces(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	number *= sign;
	return (number);
}

/* #include <stdio.h>
int main(int argc, char *argv[])
{
	int a = ft_atoi(argv[1]);
	printf("%d", a);
} */