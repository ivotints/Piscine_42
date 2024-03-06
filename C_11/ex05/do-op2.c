/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:16:03 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:16:06 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
