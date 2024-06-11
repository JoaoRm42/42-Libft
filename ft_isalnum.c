/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:38:51 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:06:31 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('F'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('x'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('\n'), 1);
	ft_putchar_fd('\n', 1);
}*/
