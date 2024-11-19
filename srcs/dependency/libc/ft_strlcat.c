/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:23:07 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:48:53 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	dest_index;
	size_t	i;

	i = 0;
	dest_index = 0;
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src) + size);
	while (dest[dest_index])
		dest_index++;
	while (src[i] != '\0' && i + dest_index < size - 1)
	{
		dest[dest_index + i] = src[i];
		i++;
	}
	dest[dest_index + i] = '\0';
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	return (ft_strlen(src) + dest_len);
}
/*int main()
{
    char dest[20] = "othmane";
    const char *src = "je te deteste";

    size_t len = ft_strlcat(dest, src, 12);

    printf("La chaîne concaténée est : %s\n", dest);
    printf("Len : %zu\n", len);
    return 0;
}*/
