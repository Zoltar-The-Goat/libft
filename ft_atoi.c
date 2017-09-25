/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:13:48 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 11:44:23 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_num(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

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
		if (ft_is_num(str[count]) == 0)
			break ;
		num = num * 10 + str[count] - '0';
		count++;
	}
	return (sign * num);
}