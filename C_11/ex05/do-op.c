/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:16:09 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:16:10 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	identifyop(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 1)
		return (5);
	if (str[0] == '+')
		return (0);
	else if (str[0] == '-')
		return (1);
	else if (str[0] == '/')
		return (2);
	else if (str[0] == '*')
		return (3);
	else if (str[0] == '%')
		return (4);
	return (5);
}

void	printerror(int op)
{
	if (op == 5)
		write(1, "0\n", 2);
	else if (op == 2)
		write(1, "Stop : division by zero\n", 24);
	else if (op == 4)
		write(1, "Stop : modulo by zero\n", 22);
	return ;
}

int	main(int argc, char *argv[])
{
	int			op;
	int			res;
	t_funcptr	p[5];

	if (argc != 4)
		return (0);
	p[0] = sum;
	p[1] = subtract;
	p[2] = div;
	p[3] = mul;
	p[4] = mod;
	op = identifyop(argv[2]);
	if ((op == 5) || ((op == 2 || op == 4) && ft_atoi(argv[3]) == 0))
	{
		printerror(op);
		return (0);
	}
	res = (*p[op])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
