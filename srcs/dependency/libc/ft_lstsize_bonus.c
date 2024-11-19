/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:30:14 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:18:29 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (i);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*int	main()
{
	int i;

    char *str = "Hello, World!";
    char *str3 = "Hello";

	// init
	t_list *head = NULL;
    t_list *node1 = ft_lstnew(str);
    t_list *node2 = ft_lstnew(str3);

	//front
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);

	//size
	i = ft_lstsize(head);

	printf("%d", i);

}*/
