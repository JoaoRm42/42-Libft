/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:16:16 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:24:36 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}

/*int	main()
{
	char	dest[] = "nem me vais ver!";
	char	src[] = "nem a mim, mas vais saber o nosso tamanho!";
	ft_putnbr_fd(ft_strlcpy(dest, src, 20), 1);
	ft_putchar_fd('\n', 1);
}*/
