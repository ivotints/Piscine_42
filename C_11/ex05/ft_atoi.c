/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:15:53 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:15:56 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);
int	ft_iswhitespace(char c);
int	ft_isdigit(char c);

int	ft_iswhitespace(char c)
{
	if ((c > 8 && c < 14) || (c == ' '))
		return (1);
	return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	minus;

	num = 0;
	i = 0;
	minus = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	minus = minus % 2;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (minus)
		return (-num);
	return (num);
}
