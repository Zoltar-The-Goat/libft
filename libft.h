/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:34:32 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/24 02:14:04 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	#include "libft.h"

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

	void	ft_putchar(char c);
	void 	ft_putchar_fd(char c, int fd);
	void	ft_bzero(void *s, size_t n);

	int		ft_isdigit(int c);
	int		ft_isalpha(int c);
	int		ft_strlen(const char *str);
	int 	ft_isspace(char c);
	int		ft_strlen(const char *str);
	int 	ft_wordcount(char *s, char c);

	void	*ft_memalloc(size_t size);
	void 	*ft_memset(void *b, int c, size_t len);
	char	*ft_strnew(size_t size);
	char	*ft_strcpy(char *dest, char *src);
	char 	*ft_alt_strsub(char const *s, unsigned int start, unsigned int end);
	char 	*ft_strsub(char const *s, unsigned int start, size_t len);
#endif