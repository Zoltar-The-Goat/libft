/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:34:32 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 16:21:53 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
} t_list;

	void	ft_putchar(char c);
	int		ft_isdigit(int c);
	int		isalpha(int c);
	int		ft_isalpha(int c);
	int		ft_strlen(const char *str);
	char	*ft_strcpy(char *dest, char *src);

#endif