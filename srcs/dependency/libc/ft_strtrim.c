/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:31:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:47:36 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	check_is_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

size_t	first_cara(const char *str, char const *set)
{
	size_t	i;

	i = 0;
	while (check_is_set(str[i], set))
		i++;
	return (i);
}

size_t	last_cara(const char *str, char const *set)
{
	size_t	i;

	i = ft_strlen(str) - 1;
	while (check_is_set(str[i], set))
		i--;
	return (i);
}

size_t	len_without_set(char const *str, char const *set)
{
	return (last_cara(str, set) - first_cara(str, set));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	i;
	size_t	dest_len;

	i = 0;
	dest_len = len_without_set(s1, set) + 1;
	if (set == NULL || ft_strlen(s1) < dest_len)
	{
		dest = malloc((1) * sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc((dest_len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < dest_len)
	{
		dest[i] = s1[first_cara(s1, set) + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
    char *s1 = "  ";
	char *s2 = "lorem \n ipsum \n dolor \n\t site \t amet";
    char *set = "\t \n";

    // Appel de votre fonction
    char *result = ft_strtrim(s1, set);

    if (result != NULL)
	{
        printf("Chaîne de caractères originale : \"%s\"\n", s1);
        printf("\nChaîne de caractères trimmée : \"%s\"\n", result);

		printf("\n");
		if (!strcmp(result, s2))
			printf("1\n");
		else
			printf("0\n");

        // Libération de la mémoire allouée
        free(result);
    } else
	{
        printf("Échec de l'allocation mémoire.\n");
    }


    return (0);
}*/
