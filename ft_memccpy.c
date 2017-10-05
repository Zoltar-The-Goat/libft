/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:13:34 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 10:12:40 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *n_src;
	unsigned char *n_dst;

	n_src = (unsigned char *)src;
	n_dst = (unsigned char *)dst;
	while(n--)
	{
		if(*n_src == (unsigned char)c)
			return(n_src++);
		*n_dst++ = *n_src++;
	}
	return(dst);
}