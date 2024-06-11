/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:48:47 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:25:25 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (ptr);
}

/*int	main()
{
	char	str[] = "Onde esta o W? Ca esta ele";
	char	c = 'W';
	ft_putendl_fd(ft_strchr(str, c), 1);
}*/
