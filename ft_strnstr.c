/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:50:25 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 17:36:55 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int pos1;
	int pos2;
	int last_pos;

	pos1 = 0;
	pos2 = 0;
	if(little[0] == '\0')
		return(char *)(big);
	while(big[pos1] != '\0' && pos1 < (int)len)
	{
		if(big[pos1] == little[pos2])
		{
			last_pos = pos1;
			while(big[pos1] == little[pos2] && pos1 < (int)len)
			{
				pos1++;
				pos2++;
				if(little[pos2] == '\0')
					return(&(((char *)big)[last_pos]));
			}
			pos1 = last_pos;
			pos2 = 0;
		}
		pos1++;
	}
	return(NULL);
}