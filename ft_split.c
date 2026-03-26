/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:35:42 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 22:19:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **arr, int used)
{
	while (used-- > 0)
		free(arr[used]);
	free(arr);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	ft_add_word(char **arr, char const *start, char const *end, int i)
{
	arr[i] = ft_substr(start, 0, end - start);
	if (!arr[i])
	{
		ft_free_split(arr, i);
		return (0);
	}
	return (1);
}

/*
** ft_split:
** Divide uma string em palavras por um separador.
*/
char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			i;
	char const	*start;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		if (s > start && !ft_add_word(arr, start, s, i++))
			return (NULL);
	}
	arr[i] = NULL;
	return (arr);
}

/*int	main(void)
{
	char	**s;
	int		i;

	s = ft_split("  um  dois   tres ", ' ');
	i = 0;
	while (s && s[i])
	{
		printf("[%s]\n", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}*/
