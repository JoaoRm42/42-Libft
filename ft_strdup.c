/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:35:46 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:17:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strdup:
** Duplica uma string para memória recém-alocada.
*/
char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;

	dst = (char *)malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int	main(void)
{
	char	*s;

	s = ft_strdup("duplicado");
	printf("%s\n", s);
	free(s);
	return (0);
}*/