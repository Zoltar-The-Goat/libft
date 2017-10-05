/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:31:27 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 08:58:42 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *ret_str;
	int c;

	if (s && f)
	{
		c = -1;
		ret_str = (char *)malloc(ft_strlen(s) * sizeof(s));
		if(ret_str)
		{
			while (s[++c])
				ret_str[c] = f(c, s[c]);
			ret_str[c] = '\0';
			return (ret_str);
		}
	}
	return (NULL);
}