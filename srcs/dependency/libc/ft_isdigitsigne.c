/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitsigne.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:31:13 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/28 14:52:58 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	loop_signe(char *str, int i, int first, int second)
{
	if ((str[i] == 45 || str[i] == 43))
	{
		first = str[i];
		i++;
		if ((str[i] >= 48 && str[i] <= 57))
		{
			if (check(first, second, str[i], str))
				NULL;
			else
				return (1);
		}
		else
			return (1);
	}
	return (0);
}

int	check_signe(char *str)
{
	int		i;
	int		first;
	int		second;

	i = 0;
	first = 0;
	second = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			second = str[i];
		if ((str[i] == 45 || str[i] == 43))
		{
			if (loop_signe(str, i, first, second))
				return (1);
		}
		second = str[i];
		i++;
		first = str[i];
	}
	return (0);
}
