/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:39:45 by joaoped2          #+#    #+#             */
/*   Updated: 2022/11/09 15:24:48 by joaoped2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	len = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		++i;
	}
	new[i] = 0;
	return (new);
}

/*char	ft_test(unsigned int i, char s)
{
	s += i;
}
int	main()
{
	char	str[] = "Ola";
	ft_putendl_fd(ft_strmapi(str, ft_test), 1);
}*/
