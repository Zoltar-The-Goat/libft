/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:47:16 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 17:38:38 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t	c;
	size_t	d_end;

	c = 0;
	if(size)
	{
		while (dst[c] && c < size)
			c++;
		d_end = c;
		while (src[c - d_end] && c < size - 1)
		{
			dst[c] = src[c - d_end];
			c++;
		}
		if (d_end < size)
			dst[c] = '\0';
		return (d_end + ft_strlen(src));
	}
	return(0);
}