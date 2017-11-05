/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 02:13:42 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 13:38:02 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c])
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}