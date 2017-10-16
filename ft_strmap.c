/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:39:54 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 11:47:20 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char *ret_str;
	int c;
	size_t size_s;

	if (s && f)
	{
		c = -1;
		size_s = sizeof(ft_strlen((char *)s) + 1);
		ret_str = (char *)malloc(size_s);
		if(ret_str)
		{
			while (s[++c])
				ret_str[c] = f(s[c]);
			ret_str[c] = '\0';
			return (ret_str);
		}
	}
	return (NULL);
}