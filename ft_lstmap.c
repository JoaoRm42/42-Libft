/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:52:18 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstmap:
** Cria nova lista aplicando função a cada nó.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}

/*static void	del_int(void *p)
{
	free(p);
}

static void	*plus_one(void *p)
{
	int	*n;

	n = malloc(sizeof(int));
	if (!n)
		return (NULL);
	*n = *(int *)p + 1;
	return (n);
}

int	main(void)
{
	t_list	*lst;
	t_list	*map;
	int		a = 4;

	lst = ft_lstnew(&a);
	map = ft_lstmap(lst, plus_one, del_int);
	printf("%d\n", *(int *)map->content);
	ft_lstclear(&map, del_int);
	free(lst);
	return (0);
}*/