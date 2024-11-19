/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:31:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:45:59 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (c == '\0' || s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*int	main()
{
    const char *str = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    const char *ptr = ft_strchr(str, '\0');
    if (ptr != NULL) {
        printf("Première trouvée à la position : %ld\n", ptr - str);
    } else {
        printf("Le caractère  n'a pas été trouvé dans la chaîne.\n");
    }
    return 0;
}*/
