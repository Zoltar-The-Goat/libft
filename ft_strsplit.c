/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:55:13 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/24 04:50:20 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char *original;
	char **ret_arr;
	int s_len;
	int first_c;
	int last_c;
	int w_count;
	int x;
	if(s && c)
	{
		x = 0;
		original = (char *)s;
		s_len = ft_strlen(s);
		w_count = ft_wordcount((char *)s, c);
		ret_arr = (char **)ft_memalloc(sizeof(char **) * w_count + 1);
		if(ret_arr)
		{
			while(w_count-- > 0 && s)
			{
				while(*s && *s == c)
					s++;
				first_c = s_len - ft_strlen(s);
				while(*s && *s != c)
					s++;
				last_c = s_len - ft_strlen(s) - 1;
				ret_arr[x] = ft_alt_strsub(original, first_c, last_c);
				x++;
			}
			ret_arr[x] = NULL;
			return(ret_arr);
		}
	}
	return(NULL);
}