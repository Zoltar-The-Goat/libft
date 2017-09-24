/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoltar <zoltar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 06:45:51 by zoltar            #+#    #+#             */
/*   Updated: 2017/09/23 06:59:48 by zoltar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_strclr(char *s)
{
	while (s)
		*s++ = '\0';
}

int main() {

	char *s = "hello";
	printf("%s\n", s);
	ft_strclr(s);
	if(!s)
		printf("test");
	else
		printf("%s\n", s);
	return(0);
}