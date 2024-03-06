/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:38:38 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:55:38 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_me(int i, int j, int grid[10][10])
{
	int	k;

	k = 1;
	if ((grid[i][0] == 1 || grid[i][1] == 1)
	|| (grid[i][2] == 1 || grid[i][3] == 1)
	|| (grid[i][4] == 1 || grid[i][5] == 1)
	|| (grid[i][6] == 1 || grid[i][7] == 1)
	|| (grid[i][8] == 1 || grid[i][9] == 1))
		return (1);
	while (j - k >= 0)
	{
		if (i - k >= 0)
			if (grid[i - k][j - k] == 1)
				return (1);
		if (i + k <= 9)
			if (grid[i + k][j - k] == 1)
				return (1);
		k++;
	}
	return (0);
}

void	print_me(int grid[10][10])
{
	int		i;
	int		j;
	char	digit;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			digit = '0' + grid[i][j];
			write(1, &digit, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	print_me2(int grid[10][10])
{
	int		i;
	int		j;
	char	check;

	i = 0;
	j = 0;
	while (j <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			if (grid[i][j] == 1)
				check = i + '0';
			i++;
		}
		write(1, &check, 1);
		j++;
	}
	write(1, "\n", 1);
}

void	put_me(int j, int grid[10][10], int *res)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		if (check_me(i, j, grid))
			i++;
		else
		{
			grid[i][j] = 1;
			if (j == 9)
			{
				*res = *res + 1;
				print_me2(grid);
			}
			put_me(j + 1, grid, res);
			grid[i][j] = 0;
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10][10];
	int	*res;
	int	a;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	a = 0;
	res = &a;
	put_me(0, grid, res);
	return (*res);
}

/* int	main(void)
{
	return (ft_ten_queens_puzzle());
} */
