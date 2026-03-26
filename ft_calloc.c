/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:35:46 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:17:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_calloc:
** Aloca memória e inicializa todos os bytes a zero.
*/
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size && n > (size_t)-1 / size)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

/*int	main(void)
{
	int	*i;

	i = ft_calloc(4, sizeof(int));
	if (!i)
		return (1);
	printf("%d %d %d %d\n", i[0], i[1], i[2], i[3]);
	free(i);
	return (0);
}*/