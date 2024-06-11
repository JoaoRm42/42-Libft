/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:39:38 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:19:21 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (s);
}

/*int main()
{
	char	str[] = "Ola bom dia";
	char	c = 'u';
	ft_putstr_fd(ft_memset(str, c, 12), 1);
	ft_putchar_fd('\n', 1);
}*/
