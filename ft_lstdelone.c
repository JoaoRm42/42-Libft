/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:52:18 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstdelone:
** Liberta um nó usando a função del.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*static void	del_int(void *p)
{
	free(p);
}

int	main(void)
{
	t_list	*n;
	int		*v;

	v = malloc(sizeof(int));
	*v = 42;
	n = ft_lstnew(v);
	ft_lstdelone(n, del_int);
	printf("ok\n");
	return (0);
}*/