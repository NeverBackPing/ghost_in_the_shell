/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:16:04 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:17:04 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	else if (!*haystack || ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle)) == 0)
		{
			while (haystack[i] != '\0' && i <= len)
			{
				if (i + ft_strlen(needle) > len)
					return (NULL);
				else if (haystack[i + 1] != '\0')
					return ((char *)&haystack[i]);
				i++;
			}
		}
		i++;
	}
	if (i == ft_strlen(haystack) + 1)
		return ((char *)&haystack[ft_strlen(haystack) - 1]);
	return (NULL);
}
/*int main()
{
    const char *str1 = ;
    const char *str2 = "coucou";
    char *result;
    //char *result1;

    result = ft_strnstr( str1, str2, -1);
	//result1 = strnstr(str1, str2, 4);

    if (result != NULL) {
        printf("Sous-chaîne trouvée à l'index : %ld\n", result - str1);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }
    return 0;
}*/
