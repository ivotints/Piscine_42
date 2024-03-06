/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:24:22 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/19 13:36:47 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

/* #include <stdio.h>

 void main(void)
{
	char c[] = "123456789";

	int a = ft_strlen(c);
	printf("%d ", a);
}  */