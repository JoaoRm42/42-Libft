/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:52:18 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstclear:
** Liberta todos os nós da lista.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

/*static void	del_int(void *p)
{
	free(p);
}

int	main(void)
{
	t_list	*lst;
	int		*a;
	int		*b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 1;
	*b = 2;
	lst = ft_lstnew(a);
	ft_lstadd_back(&lst, ft_lstnew(b));
	ft_lstclear(&lst, del_int);
	printf("%p\n", (void *)lst);
	return (0);
}*/