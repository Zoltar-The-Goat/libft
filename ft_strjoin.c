/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:53:12 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 10:38:16 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char * n_str;
	size_t n_size;
	int c;
	int i;

	i = -1;
	c = -1;
	n_size = sizeof(s1) + sizeof(s2);
	if(s1 != NULL && s2 != NULL)
	{
		n_str = (char *)malloc(n_size + 1);
		if(n_str)
		{
			while(s1[++c])
				n_str[c] = s1[c];
			c--;
			while(s1[++i])
					n_str[c++] = s1[i];
			n_str[c++] = '\0';
			return(n_str);
		}
	}
	return(NULL);
}