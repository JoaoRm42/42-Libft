/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:39:20 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:14:30 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
/*int main()
{
	ft_putnbr_fd(ft_isdigit('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('4'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('\t'), 1);
	ft_putchar_fd('\n', 1);
}*/
