/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:37:49 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/15 14:44:35 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "atoms ";
    char str2[] = "atomsabc";

    int result = ft_memcmp(str1, str2, 8);

    printf("%ld\n", strlen(str1));
    printf("%ld\n", strlen(str2));
    printf("%d\n", result);
    if (result == 0) {
        printf("Les trois premiers caractères sont identiques.\n");
    } else if (result < 0) {
        printf("Le début de la première chaîne est plus petit.\n");
    } else {
        printf("Le début de la première chaîne est plus grand.\n");
    }
    return (0);
}*/
