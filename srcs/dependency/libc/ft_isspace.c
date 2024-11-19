/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:54:58 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/26 18:03:35 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isspace(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	if (ft_strchr(str, ' ') != NULL)
		NULL ;
	else
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == 32)
			check++;
		check = ft_isdigit(str);
		if (check == 1)
			return (check);
		if (check == -1)
			return (check = -1, check);
		i++;
	}
	return (check);
}
