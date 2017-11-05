/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:13:00 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/16 19:31:52 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *n_src;
	unsigned char *n_dst;

	n_src = (unsigned char *)src;
	n_dst = (unsigned char *)dst;
	while(n--)
		*n_dst++ = *n_src++;
	return(dst);
}