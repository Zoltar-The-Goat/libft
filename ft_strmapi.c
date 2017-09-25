/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:31:27 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 15:33:41 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char * rstr;
	int c;

	rstr = (char *)malloc(sizeof(char) * ft_strlen(s));
	c = 0;
	while (s[c] != '\0')
	{
		*rstr = f(c++, *s);
		s++;
		rstr++;
	}
	return (rstr);
}