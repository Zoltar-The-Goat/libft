/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ananelli <ananelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:57:21 by ananelli          #+#    #+#             */
/*   Updated: 2017/09/25 15:57:32 by ananelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void *content;
// 	size_t content_size;
// 	struct s_list *next;
// } t_list;

t_list * ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;

	nlist = (t_list *)ft_memalloc(sizeof(t_list));
	if(nlist == NULL)
		return(NULL);
	if(content == NULL)
	{
		nlist->content = NULL;
		nlist->content_size = 0;
	}
	else
	{
		nlist->content = content;
		nlist->content_size = content_size;
	}
	nlist->next = NULL;
	return(nlist);
}