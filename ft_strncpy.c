/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 21:23:15 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 16:53:56 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strncpy(char * dst, const char * src, size_t len)
{
	int index;
	char *n_src;

	n_src = (char *)src;
	index = 0;
	while (n_src[index] != '\0' && len--)
	{
		dst[index] = n_src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}