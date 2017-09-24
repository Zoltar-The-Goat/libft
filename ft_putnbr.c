/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoltar <zoltar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 00:30:51 by zoltar            #+#    #+#             */
/*   Updated: 2017/09/21 01:49:38 by zoltar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}