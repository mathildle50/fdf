/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:43:20 by mallard           #+#    #+#             */
/*   Updated: 2017/07/10 00:45:45 by mallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 32

# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlen(char *str);
char			*ft_strncat(char *dest, const char *src, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, const char *scr, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t n);
char			*ft_strstr(const char *big, const char *little);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_strclr(char *s);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
void			ft_memdel(void **ap);
void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
size_t			ft_abs(int nb);
char			*ft_itoa(int n);
int				ft_intlen(int nb);
char			**ft_strsplit(char const *s, char c);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_swap(char *a, char *b);
void			ft_foreach(int *tab, int length, void (*f)(int));
void			ft_lstaddend(t_list **alst, t_list *new);
int				ft_strcount(char const *s, char c);
int				ft_lstsize(t_list *list);
char			*ft_strjoin_f(char *s1, char *s2, int nbr);
int				ft_lstresearch(int fd, t_list **lst);
int				get_next_line(int fd, char **line);
void			ft_print_tab(char **tab);
char			**ft_newtab(int size);
void			ft_tabdel(char **tab);
char			**ft_add_str_to_tab(char **tab, char *str, int free);
int				ft_tablen(char **tab);

#endif
