/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:08:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 23:09:14 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)(s1[i]) - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main() {
    char str1[] = "ð";
    char str2[] = "";

    int result = ft_strncmp(str1, str2, 6);
    int result1 = strncmp(str1, str2, 6);
    if (result == 0) {
        printf("Les chaînes sont identiques.\n");
    } else if (result < 0) {
        printf("La première chaîne vient avant la deuxième.\n");
    } else {
        printf("La première chaîne vient après la deuxième.\n");
    }
    printf("\n%d\n", result);

    printf("\n");

    if (result1 == 0) {
        printf("Les chaînes sont identiques.\n");
    } else if (result < 0) {
        printf("La première chaîne vient avant la deuxième.\n");
    } else {
        printf("La première chaîne vient après la deuxième.\n");
    }

    printf("\n%d\n", result1);

    return 0;
}*/