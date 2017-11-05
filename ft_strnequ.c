/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:42:35 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/03 09:16:40 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2,size_t n)
{
	int c;
	c = -1;
	if(s1 && s2)
	{
		while((int)n >= c && s1[++c] && s2[c])
		{
			if(s1 == s2 && s1 == '\0' && s2 == '\0')
				return(1);
		}
	}
	if(s1 == s2)
		return(1);
	return(0);
}