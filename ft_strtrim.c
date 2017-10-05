/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:53:38 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 11:04:51 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *n_str;
	int c;
	if(s)
	{
		n_str = ft_strnew(sizeof(s));
		n_str = ft_strcpy(n_str, (char *)s);
		c = 0;
		if(n_str)
		{
			if(n_str && ft_isspace(n_str[c]))
				while(n_str[++c] != '\0')
					n_str[c - 1] = n_str[c];
			c--;
			if (n_str && ft_isspace(n_str[c]))
				n_str[c] = '\0';
			return(n_str);
		}
	}
	return(NULL);
}