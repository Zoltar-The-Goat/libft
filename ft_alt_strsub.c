/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alt_strsub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 17:29:16 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/23 18:37:28 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_alt_strsub(char const *s, unsigned int start, unsigned int end)
{
	char *n_str;
	int c;

	if(s)
	{
		c = 0;
		n_str = (char *)ft_memalloc((end - start) + 2);
		if(n_str)
		{
			while(start <= end)
				n_str[c++] = s[start++];
			n_str[c] = '\0';
			return(n_str);
		}
		free(n_str);
	}
	return(NULL);
}