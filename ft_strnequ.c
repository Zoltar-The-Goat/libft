/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:42:35 by ananelli          #+#    #+#             */
/*   Updated: 2017/11/07 06:56:35 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int c;

	c = -1;
	if (s1 && s2 && n != 0)
	{
		while ((int)n >= ++c && s1[c] && s2[c])
		{
			if (s1 == s2 && s1 == '\0' && s2 == '\0')
				return (1);
		}
	}
	if (s1 == s2 && n != 0)
		return (1);
	return (0);
}
//
// int main(int ac, char **av)
// {
// 	printf("%d\n", ft_strnequ("ededeqdf", "", 0));
// 	return(0);
// }
