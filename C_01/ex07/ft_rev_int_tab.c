/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:37:25 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/19 14:42:34 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i++] = temp;
	}
}

/* 
#include <stdio.h>

int main() {
	int numbers[] = {1, 2, 3, 4, 5};
	int length = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < length; i++)
		printf("%d ", numbers[i]);
	printf("\n");
	ft_rev_int_tab(numbers, length);
	
	for (int i = 0; i < length; i++)
		printf("%d ", numbers[i]);

	return 0;
} */