/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:29:46 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/25 19:22:43 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	dl = j;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src [i] && i < size - dl - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dl + sl);
}

/* //Reproduce the behavior of the function strlcat
#include <string.h>


int main(void)
{
	char dest[100] = "0000000";
	char src[] = "123456789";
	//int i = ft_strlcat(dest, src, 20);
	int a;
	a = strlcat(dest, src, 20);
} */