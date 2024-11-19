/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:31:39 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:18:21 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
/*int	main()
{

	t_list *head = NULL;

    char *str = "ici";
    char *str3 = "Hello";
    char *str4 = "Hello, World!";

    t_list *node1 = ft_lstnew(str);
    t_list *node2 = ft_lstnew(str3);
    t_list *node3 = ft_lstnew(str4);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	t_list *last = ft_lstlast(head);

	printf("%s\n", (char *)last->content);

	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(last);
}*/
