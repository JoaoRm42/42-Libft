/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:36:13 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:20:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_striteri:
** Aplica função in-place a cada caráter da string.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void	plus_i(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	s[] = "aaaa";

	ft_striteri(s, plus_i);
	printf("%s\n", s);
	return (0);
}*/