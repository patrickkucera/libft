/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:40:50 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 12:47:55 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strrchr(char const *str, int c);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int ch);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
