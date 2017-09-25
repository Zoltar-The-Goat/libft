/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:39:54 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 15:30:30 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char * ft_strmap(char const *s, char (*f)(char))
{
	char * rstr;
	rstr = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s)
	{
		*rstr = f(*s);
		s++;
		rstr++;
	}
	return (rstr);
}

char func1(char c)
{
	return(c - 32);
}

int main()
{
	char *str = "hello";
	ft_strmap(str, func1);
	printf("\n%s\n", str);
	return(0);
}