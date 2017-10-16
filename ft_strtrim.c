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
		c = -1;
		n_str = (char *)malloc(sizeof(ft_strlen(s) + 1));
		if(n_str)
		{
			while (s[++c])
			{
				if(s[0] == '\n' || s[0] == '\t' || s[0] == ' ')
					n_str[c] = s[c + 1];
				else
					n_str[c] = s[c];
			}
			if(s[c - 1] == '\n' || s[c - 1] == '\t' || s[c - 1] == ' ')
				(s[0] == '\n' || s[0] == '\t' || s[0] == ' ') ? c = c - 2 : c--;
			n_str[c] = '\0';
		}
		return (n_str);
	}
	return(NULL);
}

int main()
{
	char const *s = "     ";
	printf("%s\n",s);
	printf("%s\n",ft_strtrim(s));
	return(0);
}