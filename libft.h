/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slatrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:28:42 by slatrech          #+#    #+#             */
/*   Updated: 2024/12/02 10:25:27 by slatrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(const char *ch);

int		ft_isalnum(int a);

int		ft_isalpha(int a);

int		ft_isascii(int a);

int		ft_isdigit(int a);

int		ft_isprint(int a);

int		ft_tolower(int ch);

int		ft_toupper(int ch);

int		ft_memcmp(const void *p1, const void *p2, size_t size);

int		ft_strncmp(const char *f, const char *s, size_t l);

char	*ft_strchr(const char *s, int search);

char	*ft_strdup(const char *src);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strrchr(const char *s, int search);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t	ft_strlcat(char *dst, const char *src, size_t n);

size_t	ft_strlcpy(char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_bzero(void *dest, size_t count);

void	*ft_calloc(size_t elementcount, size_t elementsize);

void	*ft_memchr(const void *data, int tofind, size_t size);

void	*ft_memcpy(void *destination, const void *source, size_t num);

void	*ft_memmove(void *destination, const void *source, size_t size);

void	*ft_memset(void *dest, int value, size_t count);

#endif
