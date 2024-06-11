/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:53:53 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:25:08 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}

/*int	main()
{
	char	str[] = "Sera que sou grande?";
	char	str1[] = "Ou sera que eu ainda sou maior?";
	ft_putnbr_fd(ft_strncmp(str, str1, 5), 1);
	ft_putchar_fd('\n', 1);
}*/
