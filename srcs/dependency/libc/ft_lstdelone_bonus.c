/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstalone_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:45:00 by sjossain          #+#    #+#             */
/*   Updated: 2024/05/20 19:05:41 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free (lst);
}
/*void  del(void *content)
{
	printf("le content est  a : %p\n", content);
}
int	main()
{

	t_list *head = NULL;
	t_list *original_head = NULL;

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

	ft_lstadd_front(&head, node5);

	original_head = head;

	printf("ma liste chaine: \n\n");
    while (head != NULL)
	{
        printf(" ----> | %s |\n", (char *)head->content);
        head = head->next;
    }
	printf(" --->|  NULL  |\n");

	printf("adresse : %p\n", node5->content);

	head = original_head;

	ft_lstdelone(node5, del);

	printf("ma New chaine: \n\n");
    while (head != NULL)
	{
        printf(" ----> | %s |\n", (char *)head->content);
        head = head->next;
    }
	printf(" --->|  NULL  |\n");

	free(head);
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);
}*/
