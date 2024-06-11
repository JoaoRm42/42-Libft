/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:39:11 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:13:00 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main()
{
	ft_putnbr_fd(ft_isascii(50), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(100), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(190), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(200), 1);
	ft_putchar_fd('\n', 1);
}*/
