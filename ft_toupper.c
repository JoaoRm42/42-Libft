/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:35:18 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:26:03 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main()
{
	ft_putchar_fd(ft_toupper('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('u'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_toupper('5'), 1);
	ft_putchar_fd('\n', 1);
}*/
