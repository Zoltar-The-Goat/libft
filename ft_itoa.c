/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:55:41 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/26 17:41:20 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_intmin(void)
{
	char	*buf;

	buf = ft_strnew(11);
	ft_strcpy(buf, "-2147483648");
	return (buf);
}

char *ft_itoa(int n)
{
	int size;
	int start;
	int temp;
	char sign;
	char *ret;

	size = 0;
	start = 0;
	temp = n;
	sign = '+';

	if(n == -2147483648)
		return (ft_intmin());
	else if(n < 0)
	{
		sign = '-';
		temp *= -1;
		n *= -1;
		size++;
	}
	while(temp > 9)
	{
		temp /= 10;
		size++;
	}
	size++;
	ret = (char *)ft_memalloc(size + 1);
	if(ret)
	{
		ret[size + 1] = '\0';
		while(n > 9)
		{
			while(start < size)
				ret[start++] = (n % 10) + 48;
			size--;
			start = 0;
			n /= 10;
		}
		ret[0] = (n % 10) + 48;
		if(sign == '-')
		{
			ret[0] = '-';
			ret[1] = (n % 10) + 48;
		}
	}
	return(ret);
}


//
// int main()
// {
// 	printf("\nvalue: %s\n", ft_itoa(-2147483648));
// 	return(1);
// }