/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:36:13 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:24:13 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		++i;
	}
}

/*void	ft_test(unsigned int i, char *str)
	{
		*str += i;
	}
int	main()
{
	char	str[] = "aBcDeF";
	ft_striteri(str, ft_test);
	ft_putendl_fd(str, 1);
}*/
