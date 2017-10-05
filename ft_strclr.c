/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoltar <zoltar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 06:45:51 by zoltar            #+#    #+#             */
/*   Updated: 2017/10/03 02:03:24 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strclr(char *s)
{
	while (s && *s)
		*s++ = '\0';
}