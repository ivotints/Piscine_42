/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:15:59 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/07 00:16:01 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

typedef int	(*t_funcptr)(int, int);

void	printerror(int op);
int		ft_atoi(char *str);
int		ft_iswhitespace(char c);
int		ft_isdigit(char c);
int		sum(int a, int b);
int		subtract(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		identifyop(char *str);

#endif
