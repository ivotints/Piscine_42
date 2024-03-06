/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:45:09 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/20 11:53:55 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= ' ' && str[i] <= '~')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/* 
void main(void)
{
	char c[] = "ABRAKADABRA";
	int a = ft_str_is_printable(c);
} */