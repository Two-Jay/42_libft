/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 01:41:02 by jekim             #+#    #+#             */
/*   Updated: 2021/01/06 03:01:22 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H__
# define __LIBFT_H__

/* part 1 functions */
int	ft_atoi(const char *nptr);
void	ft_bzero(void *dst,size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isscii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);
char	*ft_strchr(const char *src, int c);
char	*ft_strdup(const char *s);
size_t	*ft_strlcat(char *dst);
size_t	*ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	*ft_strlen(const char *src);
int	*ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *src, int c);
int	*ft_tolower(int c);
int	*ft_toupper(int c);

/* part 2 functions */

/* part 3 list struct and it's functions */

#endif


