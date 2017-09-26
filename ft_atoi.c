/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:13:48 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 15:27:22 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int num;
	int count;
	int sign;

	sign = 1;
	count = 0;
	if (str[0] == '-')
	{
		sign = -1;
		count++;
	}
	while (str[count] != '\0')
	{
		if (ft_isdigit(str[count]) == 0)
			break ;
		num = num * 10 + str[count] - '0';
		count++;
	}
	return (sign * num);
}