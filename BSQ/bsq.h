/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onovytsk <onovytsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:03:26 by ivotints          #+#    #+#             */
/*   Updated: 2023/12/06 17:58:03 by onovytsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

extern int	g_row_amount;
extern int	g_col_amount;
extern char	g_blank;
extern char	g_obstacle;
extern char	g_fill;
extern char	**g_map;
void		freememory2(char **dp);
int			ft_atoi(char *str);
int			ft_check(char *argv);
int			ft_check2(char *argv);
char		**ft_split(char *str, char *charset);
void		ft_strncpy(char *dest, char *src, int n);
int			**make_dp(void);
void		solve_me(void);
int			ft_check_rows(int col_num, char **map);
int			ft_check_every_row(char **map);
void		ft_check_first_row_return_col_num(char *row);
void		input_me(void);

#endif
