/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:09:43 by ivotints          #+#    #+#             */
/*   Updated: 2023/11/21 13:04:57 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;						
	int		first_char;
	char	c;

	i = 0;
	first_char = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (first_char == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (first_char == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			first_char = 1;
		else
			first_char = 0;
		i++;
	}
	return (str);
}

/*   void main(void)
{
	char c[] = "Ac+dC ;042 \n\t hoBBit";
	ft_strcapitalize(c);
}   */