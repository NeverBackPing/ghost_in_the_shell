/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:45:43 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:19:57 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*int main(int argc, char **argv)
{
	(void) argc;
	char c = argv[1][0];
	char upper = ft_toupper(argv[1][0]);

	printf("%c\n", c);
	printf("%c\n\n", upper);

	char c2 = argv[1][1];
	char upper2 = toupper(argv[1][1]);

	printf("%c\n", c2);
	printf("%c\n", upper2);
}*/
