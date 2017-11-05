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

static int ft_is_atoi_space(char c)
{
	while(c == ' ' || c == '\n' || c == '\t' ||
		c == '\v' || c == '\f' || c =='\r')
		return(1);
	return(0);
}


int		ft_atoi(char *str)
{
	int num;
	int count;
	int sign;
	unsigned int n;

	sign = 1;
	count = 0;
	num = 0;
	while(ft_is_atoi_space(str[count]))
		count++;
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}else if (str[count] == '+')
		count++;
	while (str[count] != '\0')
	{
		if (ft_isdigit(str[count]) == 0)
			break;
		else if(str[count] == ' ')
			return(0);

		n = num;
		n = n * 10 + str[count] - '0';
		if((sign == -1 && n > 2147483648) || (sign == 1 && n > 2147483647))
			return(0);
		num = num * 10 + (str[count] - '0');
		count++;
	}
	return (sign * num);
}