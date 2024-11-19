/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:19:28 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:22:20 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			if (head)
				ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
/*
// a = 1, 2, 3, 4, 5
	// f(x) => x + 1
	// ft_lstmap(a, f, del) => 2, 3, 4, 5, 6
	//	ft_lstier()
int  *f(void *content)
{
	content += 10;
	return(content);
}
void  del(void *content)
{
	printf("le content | %s | est : %p\n", (char *)content, content);
}
int	main()
{

	t_list *head = NULL;
	t_list *original_head = NULL;

    int str1 = 1;
    int str2 = 2;
    int str3 = 3;
    int str4 = 4;
    int str5 = 5;

    t_list *node1 = ft_lstnew(&str1);
    t_list *node2 = ft_lstnew(&str2);
    t_list *node3 = ft_lstnew(&str3);
    t_list *node4 = ft_lstnew(&str4);
    t_list *node5 = ft_lstnew(&str5);

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node4);

	ft_lstadd_front(&head, node5);

	original_head = head;

	printf("ma liste chaine: \n\n");
    while (head != NULL)
	{
        printf(" ----> | %d |\n", (int)head->content);
        head = head->next;
    }
	printf(" --->|  NULL  |\n");

	printf("adresse : %p\n", head);

	head = original_head;

	ft_lstmap(head, (f)(head->content),del);

	printf("ma New chaine: \n\n");
    while (head != NULL)
	{
        printf(" ----> | %d |\n", (int)head->content);
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
}
*/
