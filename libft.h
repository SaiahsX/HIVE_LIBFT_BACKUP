/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oadewumi <oadewumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:30:22 by oadewumi          #+#    #+#             */
/*   Updated: 2023/12/05 20:24:09 by oadewumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define FT_LONG_MAX 9223372036854775807L

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);

int		ft_strncmp(const char *src, const char *dest, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		ft_isdigit(int num);
int		ft_isalpha(int alf);
int		ft_isalnum(int an);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isascii(int a);
int		ft_isprint(int p);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);

#endif