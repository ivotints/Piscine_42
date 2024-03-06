/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:27:03 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/22 20:01:55 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

/* //Reproduce the behavior of the function strcmp
#include <unistd.h>

int main()
{
	char c[] = "Abcd";
	char d[] = "Abcd";
	int i = ft_strcmp(c, d);
	char a = '0'+ i;
	write(1, &a, 1);
} */