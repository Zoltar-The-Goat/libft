/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:53:38 by ananelli          #+#    #+#             */
/*   Updated: 2017/10/17 04:04:46 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *ret_s;

	int total;
	int first_c;
	int last_c;

	total = ft_strlen(s);
	if(s)
	{
		if(!s)
			return(NULL);
		while(ft_isspace(*s))
			s++;
		first_c = ft_strlen(s);
		while(*s)
			s++;
		s--;
		while(ft_isspace(*s))
			 s--;
		last_c = ft_strlen(s);
		ret_s = (char *)ft_memalloc((total - last_c) - (total - first_c));
		printf("%s\n", ret_s);
		while(last_c <= first_c)
			*ret_s++ = s[last_c++];
		return(ret_s);
	}
	return(NULL);
}

int main()
{
	char *s = " hello ";
	printf("test : %s\n", s);
	printf("test : %s\n", ft_strtrim((char const *)s));
	return(0);
}