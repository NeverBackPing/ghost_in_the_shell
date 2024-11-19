/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:45:00 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:18:06 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main()
{

	t_list *head = NULL;

    char *str = "Hello, World!";
    char *str3 = "Hello";

    t_list *node1 = ft_lstnew(str);
    t_list *node2 = ft_lstnew(str3);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

    while (head != NULL)
	{
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
	free(head);
	free(node1);
	free(node2);
}*/
