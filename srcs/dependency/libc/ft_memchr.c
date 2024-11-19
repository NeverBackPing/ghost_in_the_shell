/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:57:17 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/15 13:29:07 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    void *ptr;
    void *ptr2;
    char str[] = "Hello, World!";
    ptr = ft_memchr(str, 0, 0);
    if (ptr != NULL)
    {
        printf("la position %ld\n", (char *)ptr - str);
    } else {
        printf("n'a pas été trouvé.\n");
    }
    printf("\n");

    ptr2 = memchr(str, 'W', ft_strlen(str));
    if (ptr2 != NULL)
    {
        printf("la position %ld\n", (char *)ptr2 - str);
    } else {
        printf("n'a pas été trouvé.\n");
    }
    return 0;
}*/
