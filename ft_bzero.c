/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:38:40 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:10:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_bzero:
** Coloca a zero os primeiros n bytes da memória.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}

/*int	main(void)
{
	char	buf[8] = "abcdefg";

	ft_bzero(buf + 2, 3);
	printf("%c %c %d %d %d %c\n", buf[0], buf[1], buf[2], buf[3],
		buf[4], buf[5]);
	return (0);
}*/