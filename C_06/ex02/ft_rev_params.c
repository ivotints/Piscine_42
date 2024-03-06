/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:15:44 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/27 14:19:11 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc-- > 1)
	{
		i = 0;
		while (argv[argc][i])
			write (1, &(argv[argc][i++]), 1);
		write (1, "\n", 1);
	}
	return (0);
}
