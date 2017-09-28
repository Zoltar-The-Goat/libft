/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:34:32 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 17:17:54 by ananelli         ###   ########.fr       */
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

	int		ft_isdigit(int c);
	int		isalpha(int c);
	int		ft_isalpha(int c);
	int		ft_strlen(const char *str);

	void 	*ft_memset(void *b, int c, size_t len);

	char	*ft_strcpy(char *dest, char *src);

#endif