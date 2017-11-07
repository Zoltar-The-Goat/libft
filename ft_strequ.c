/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:33:14 by ananelli          #+#    #+#             */
/*   Updated: 2017/11/07 02:10:37 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int c;

	c = -1;
	if (s1 && s2)
	{
		while (s1[++c] && s2[c])
		{
			if (s1 == s2 && s1 == '\0' && s2 == '\0')
				return (1);
		}
	}
	if (s1 == s2)
		return (1);
	return (0);
}
