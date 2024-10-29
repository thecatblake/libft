/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:51:04 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/26 18:05:29 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*head;
	t_list	*save;

	len = ft_lstsize(lst);
	head = ft_lstnew(f(lst->content));
	save = head;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&head, ft_lstnew(lst->content));
		head = head->next;
		lst = lst->next;
	}
	return (save);
}
