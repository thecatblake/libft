/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaga     <k222ryousuke@gmail.com   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:32:03 by rkaga             #+#    #+#             */
/*   Updated: 2024/10/30 06:32:03 by rkaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*square(void *x)
{
	int	*ptr;

	ptr = (int *)malloc(sizeof(int *));
	*ptr = *(int *)x;
	*ptr *= *ptr;
	return ((void *)ptr);
}

int	main(void)
{
	int		xs[] = {1, 2, 3, 4, 5};
	t_list	*head;
	t_list	*mapped;

	head = ft_lstnew(xs);
	ft_lstadd_back(&head, ft_lstnew(xs + 1));
	ft_lstadd_back(&head, ft_lstnew(xs + 2));
	ft_lstadd_back(&head, ft_lstnew(xs + 3));
	mapped = ft_lstmap(head, square, NULL);
	while (mapped)
	{
		printf("%d\n", *(int *)mapped->content);
		mapped = mapped->next;
	}
	return (0);
}
