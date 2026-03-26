/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoped2 <joaoped2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:33:40 by joaoped2          #+#    #+#             */
/*   Updated: 2026/03/24 21:24:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/*
** Parte 1 - Funções equivalentes às funções base da libc.
*/

/* Verifica se o carácter é alfabético (A-Z ou a-z). */
int		ft_isalpha(int c);
/* Verifica se o carácter é numérico (0-9). */
int		ft_isdigit(int c);
/* Verifica se o carácter é alfanumérico. */
int		ft_isalnum(int c);
/* Verifica se o valor está no intervalo ASCII. */
int		ft_isascii(int c);
/* Verifica se o carácter é imprimível. */
int		ft_isprint(int c);
/* Calcula o tamanho de uma string até ao '\0'. */
size_t	ft_strlen(const char *s);
/* Preenche n bytes de s com o byte c. */
void	*ft_memset(void *s, int c, size_t n);
/* Coloca n bytes de s a zero. */
void	ft_bzero(void *s, size_t n);
/* Copia n bytes de src para dest (sem overlap). */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* Copia n bytes de src para dest (com overlap seguro). */
void	*ft_memmove(void *dest, const void *src, size_t n);
/* Copia string para dest com tamanho máximo size. */
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/* Concatena src em dst respeitando o tamanho total size. */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/* Converte letra minúscula para maiúscula. */
int		ft_toupper(int c);
/* Converte letra maiúscula para minúscula. */
int		ft_tolower(int c);
/* Procura a primeira ocorrência de c em s. */
char	*ft_strchr(const char *s, int c);
/* Procura a última ocorrência de c em s. */
char	*ft_strrchr(const char *s, int c);
/* Compara duas strings até n caracteres. */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* Procura o byte c nos primeiros n bytes de s. */
void	*ft_memchr(const void *s, int c, size_t n);
/* Compara duas zonas de memória em n bytes. */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* Procura substring em string com limite len. */
char	*ft_strnstr(const char *string, const char *substring, size_t len);
/* Converte string numérica para int. */
int		ft_atoi(const char *str);
/* Aloca nmemb * size bytes e inicia tudo a zero. */
void	*ft_calloc(size_t nmemb, size_t size);
/* Duplica uma string para memória nova. */
char	*ft_strdup(const char *src);

/*
** Parte 2 - Funções adicionais da Libft.
*/

/* Extrai substring de s a partir de start com máximo len. */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/* Junta s1 e s2 numa nova string alocada. */
char	*ft_strjoin(char const *s1, char const *s2);
/* Remove do início/fim os caracteres de set. */
char	*ft_strtrim(char const *s1, char const *set);
/* Divide s por c e devolve array terminado em NULL. */
char	**ft_split(char const *s, char c);
/* Converte int para string alocada. */
char	*ft_itoa(int n);
/* Aplica função f a cada carácter e devolve nova string. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* Aplica função f in-place a cada carácter de s. */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Escreve um carácter no descritor fd. */
void	ft_putchar_fd(char c, int fd);
/* Escreve string no descritor fd. */
void	ft_putstr_fd(char *s, int fd);
/* Escreve string seguida de '\n' no descritor fd. */
void	ft_putendl_fd(char *s, int fd);
/* Escreve número inteiro no descritor fd. */
void	ft_putnbr_fd(int n, int fd);

/*
** Parte Bónus - Lista ligada simples.
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* Cria novo nó com conteúdo content. */
t_list	*ft_lstnew(void *content);
/* Insere nó new no início da lista. */
void	ft_lstadd_front(t_list **lst, t_list *new);
/* Conta o número de nós da lista. */
int		ft_lstsize(t_list *lst);
/* Devolve o último nó da lista. */
t_list	*ft_lstlast(t_list *lst);
/* Insere nó new no fim da lista. */
void	ft_lstadd_back(t_list **lst, t_list *new);
/* Liberta nó único com função del. */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* Liberta lista inteira com função del. */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/* Aplica função f ao conteúdo de cada nó. */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* Cria nova lista aplicando f a cada nó da lista original. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
