/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:45:43 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:19:52 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*int main(int argc, char **argv)
{
	(void) argc;
	char c = argv[1][0];
	char lower = ft_tolower(argv[1][0]);

	printf("%c\n", c);
	printf("%c\n\n", lower);

	char c2 = argv[1][1];
	char lower2 = tolower(argv[1][1]);

	printf("%c\n", c2);
	printf("%c\n", lower2);
}*/
