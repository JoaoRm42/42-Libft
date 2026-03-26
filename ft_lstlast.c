/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:52:18 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:22:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstlast:
** Obtém o último nó da lista.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list	*lst;
	int		a = 1;
	int		b = 2;

	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	printf("%d\n", *(int *)ft_lstlast(lst)->content);
	free(lst->next);
	free(lst);
	return (0);
}*/