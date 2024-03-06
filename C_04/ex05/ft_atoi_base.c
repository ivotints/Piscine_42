/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:37:41 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/26 16:37:45 by ivotints         ###   ########.fr       */
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

int	ft_length(char *base)
{
	int	base_len;
	int	j;
	int	i;

	base_len = 0;
	while (base[base_len] && base[base_len] != '+' && base[base_len] != '-'
		&& base[base_len] != ' ' && base[base_len] != '\t')
		base_len++;
	if (base_len < 2 || base[base_len] == '+' || base[base_len] == '-'
		|| base[base_len] == ' ' || base[base_len] == '\t')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[i] != base[j] && j < base_len)
			j++;
		if (base[i] == base [j])
			return (0);
		i++;
	}
	return (base_len);
}

int	ft_transform(char *str, char *base, int base_len)
{
	int	i;
	int	j;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				result *= base_len;
				result += j;
			}
			j++;
		}
		i++;
	}
	return (result * spaces(str, &sign));
}

int	ft_atoi_base(char *str, char *base)
{
	if (ft_length(base) < 2)
		return (0);
	return (ft_transform(str, base, ft_length(base)));
}

/* #include <stdio.h>
int	main()
{
	char str[] = "";
	char base[] = "";
	int i = ft_atoi_base(str, base);
	printf("%d", i);
} */