/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:52:18 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lstadd_back:
** Insere um nó no fim da lista.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	int		v1 = 10;
	int		v2 = 20;

	a = ft_lstnew(&v1);
	b = ft_lstnew(&v2);
	ft_lstadd_back(&a, b);
	printf("%d %d\n", *(int *)a->content, *(int *)a->next->content);
	free(a->next);
	free(a);
	return (0);
}*/