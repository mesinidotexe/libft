/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:34:39 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/20 11:34:51 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <strings.h>

// string
int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strnstr(char *big, char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// memory
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

// usefull
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);

#endif