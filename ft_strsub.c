/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:52:44 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 10:17:51 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *n_str;

	if(s && start && len)
	{
		n_str = (char *)malloc(len);
		if(n_str)
		{
			while(len)
			{
				n_str[start] = s[start];
				start++;
				len--;
			}
			return(n_str);
		}
	}
	return(NULL);
}