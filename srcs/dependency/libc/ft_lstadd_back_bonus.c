/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:15:34 by sjossain          #+#    #+#             */
/*   Updated: 2024/05/20 19:45:22 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	while (*lst)
		lst = &(*lst)->next;
	(*lst) = new;
}
/*int	main()
{

	t_list *head = NULL;
	t_list *heads;

    char *str1 = "A";
    char *str2 = "B";
    char *str3 = "C";
    char *str4 = "D";
    char *str5 = "Z";

    t_list *node1 = ft_lstnew(str1);
    t_list *node2 = ft_lstnew(str2);
    t_list *node3 = ft_lstnew(str3);
    t_list *node4 = ft_lstnew(str4);
    t_list *node5 = ft_lstnew(str5);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node4);

	ft_lstadd_back(&head, node5);
	printf("ma liste chaine: \n\n");

	heads = head;
    while (head != NULL)
	{
        printf(" ----> | %s |\n", (char *)head->content);
        head = head->next;
    }
	printf(" --->|  NULL  |\n");
	printf("\n");
	while (heads != NULL)
	{
        printf(" ----> | %s |\n", (char *)heads->content);
        heads = heads->prev;
    }
	printf(" --->|  NULL  |\n");
	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
