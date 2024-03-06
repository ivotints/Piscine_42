/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:43:27 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/19 15:12:55 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (size > 1)
	{
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
		i = 0;
	}
}

/* 
#include <stdio.h>

int main() {
	int numbers[] = {88, 2, -2, 4, 9};
	int length = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < length; i++)
		printf("%d ", numbers[i]);
	printf("\n");
	ft_sort_int_tab(numbers, length);
	
	for (int i = 0; i < length; i++)
		printf("%d ", numbers[i]);

	return 0;
} */