/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:23:07 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:30:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/*
** ft_itoa:
** Converte um inteiro para string.
*/
char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;
	int		i;

	nb = n;
	len = ft_numlen(nb);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	i = len - 1;
	while (nb > 0)
	{
		res[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_itoa(0);
	s2 = ft_itoa(-2147483648);
	s3 = ft_itoa(2147483647);
	printf("%s | %s | %s\n", s1, s2, s3);
	free(s1);
	free(s2);
	free(s3);
	return (0);
}*/