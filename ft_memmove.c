/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 16:14:27 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 17:01:50 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	void *o_dst;
	char *n_src;
	char *n_dst;
	int c;

	c = 0;
	o_dst = dst;
	n_src = (char *)src;
	n_dst = (char *)dst;
	while(len--)
	{
		n_dst[c] = n_src[c];
		dst++;
		src++;
		c++;
	}
	return(o_dst);
}