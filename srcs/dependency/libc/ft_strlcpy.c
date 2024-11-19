/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:50:20 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/19 00:19:24 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
/*int	main(void)
{
    char src[] = "hello";
    char dest[10];

    size_t len = ft_strlcpy(dest, src, 13);

    printf("Chaîne copiée : %s\n", dest);
    printf("Longueur de la chaîne copiée : %zu\n", len);
    return 0;
}*/
