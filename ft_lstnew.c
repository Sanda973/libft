/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgury <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 13:47:50 by sgury             #+#    #+#             */
/*   Updated: 2019/04/10 15:39:13 by sgury            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_content;

	if ((new_content = (t_list *)malloc(sizeof(t_list)) == NULL))
		return (NULL);
	if (content == NULL)
	{
		new_content->content = NULL;
		content_size->content = 0;
	}
	new_content->content = content;
	new_content->content_size = content_size;
	new_content->next = NULL;
	return (new_content);
}
