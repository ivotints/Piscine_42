/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammanap <kammanap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:52:51 by kammanap          #+#    #+#             */
/*   Updated: 2023/11/19 14:52:56 by kammanap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char ch_1, char ch_2, char ch_3)
{
	int	position;

	position = 1;
	while (position <= x)
	{
		if (position == 1)
			ft_putchar(ch_1);
		else if (position == x)
			ft_putchar(ch_3);
		else
			ft_putchar(ch_2);
		position++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter;

	counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (counter <= y)
		{
			if (counter == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (counter == y)
				ft_print(x, 'A', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			counter++;
		}
	}
}
