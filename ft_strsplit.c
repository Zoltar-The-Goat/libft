/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:55:13 by ananelli          #+#    #+#             */
/*   Updated: 2017/11/07 12:19:19 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"
#define W_COUNT (ft_wordcount((char *)s, c))

static void	init_var(int *x, int *slen, char **orig, char const *s)
{
	*x = 0;
	*orig = (char *)s;
	*slen = ft_strlen((char *)s);
}

int ft_check_empty(char const *s, char c)
{
	if (*s == '\0')
		return (0);
	while (*s == c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*orig;
	char	**ret_arr;
	int		slen;
	int		c1;
	int		x;

	if (s && c && ft_check_empty(s, c))
	{
		init_var(&x, &slen, &orig, s);
		if ((ret_arr = (char **)ft_memalloc(sizeof(char **) * W_COUNT + 1)))
		{
			while (W_COUNT >= x && s)
			{
				while (*s && *s == c)
					s++;
				c1 = slen - ft_strlen(s);
				while (*s && *s != c)
					s++;
				ret_arr[x++] = ft_alt_strsub(orig, c1, slen - ft_strlen(s) - 1);
			}
			ret_arr[x] = NULL;
			return (ret_arr);
		}
	}
	return (NULL);
}

//
// int main(int ac, char ** av)
// {
// 	char **test = ft_strsplit("*****", '*');
// 	printf("\n%s, %s\n\n", test[0], test[1]);
//
// 	return(0);
// }
