/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:31:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:47:36 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	if ((!*s && s == NULL))
		return (NULL);
	s_len = ft_strlen(s) + 1;
	while (s_len)
	{
		--s_len;
		if (s[s_len] == (unsigned char)c)
		{
			return ((char *)s + s_len);
		}
	}
	return (NULL);
}
/*/int main()
{
    const char *str = "t";
    const char *ptr = ft_strrchr(str, 't' + 256);
    if (ptr != NULL) {
        printf("La dernière la position : %ld\n", ptr - str);
    } else {
        printf("Le caractère n'a pas été trouvé dans la chaîne.\n");
    }
    int i;

    i = ft_strlen(str);

    printf("%d\n", i);
    return 0;
}*/