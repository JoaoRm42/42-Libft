/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:38:51 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 23:05:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_memcmp:
** Compara duas zonas de memoria em n bytes.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;

	d = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	while (n--)
	{
		if (*d != *s)
			return (*d - *s);
		d++;
		s++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_memcmp("abc", "abc", 3));
	printf("%d\n", ft_memcmp("abc", "abd", 3));
	printf("%d\n", ft_memcmp("abd", "abc", 3));
	return (0);
}*/