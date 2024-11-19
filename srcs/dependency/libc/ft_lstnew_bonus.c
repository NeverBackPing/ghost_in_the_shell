/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:50:58 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:18:26 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
/*int main()
{
    int a = 5;
    char *str = "Hello, World!";
    char *str3 = "Hello, World!";

    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(str);
    t_list *element = ft_lstnew(str3);

    if (node1 != NULL && node2 != NULL && element != NULL)
    {
        printf("Node 1 content: %d\n", *(int *)(node1->content));
        printf("Node 2 content: %s\n", (char *)(node2->content));
		printf("element content: %s\n", (char *)(element->content));
    }
    else
    {
        printf("Failed to allocate memory for nodes.\n");
    }
    free(node1);
    free(node2);
    free(element);

    return 0;
}*/
