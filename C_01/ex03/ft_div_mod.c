/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:20:43 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/18 16:30:38 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp;

	temp = a / b;
	*div = temp;
	temp = a % b;
	*mod = temp;
}

/* void main(void)
{
	int div;
	int mod;

	ft_div_mod(12, 5, &div, &mod);
	ft_div_mod(16, 2, &div, &mod);
	ft_div_mod(70, 11, &div, &mod);
	ft_div_mod(2, 1, &div, &mod);
} */