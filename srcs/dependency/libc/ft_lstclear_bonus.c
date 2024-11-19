/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:31:39 by sjossain          #+#    #+#             */
/*   Updated: 2024/05/20 18:12:26 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = *lst;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = tmp2;
	}
	*lst = NULL;
}
/*void  del(void *content)
{
	printf("le content | %s | est : %p\n", (char *)content, content);
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

	printf("adresse : %p\n", head);

	head = original_head;

	ft_lstclear(&head, del);

	printf("ma New chaine: \n\n");
    while (head != NULL)
	{
        printf(" ----> | %s |\n", (char *)head->content);
        head = head->next;
    }
	printf(" --->|  NULL  |\n");

	if (head != NULL)
		free(head);
	if (node1 != NULL)
		free(node1);
	if (node2 != NULL)
		free(node2);
	if (node3 != NULL)
		free(node3);
	if (node4 != NULL)
		free(node4);
	if (node5 != NULL)
		free(node5);
}*/
