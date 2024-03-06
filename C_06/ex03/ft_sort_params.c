/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:19:39 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/27 15:11:47 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, &(str[i++]), 1);
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argc > j)
	{
		i = 1;
		while (argc > i)
		{
			if ((argv[i + 1]) && (ft_strcmp(argv[i], argv[i + 1]) > 0))
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j++;
	}
	i = 1;
	while (argc > i)
		ft_putstr(argv[i++]);
	return (0);
}
