/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:23:07 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/16 15:10:40 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char		*ret;
	size_t		size;

	size = ft_strlen(s) * 1;
	ret = (char *)malloc(size + 1);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s, size + 1);
	return (ret);
}
/*int	main()
{
	const char *original = "this is a normal test";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL) {
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);

		// Modifier la copie
		strcat(duplicate, " (duplicate)");
		printf("Modified Duplicate: %s\n", duplicate);

		free(duplicate); // N'oubliez pas de libérer la mémoire allouée
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
}*/
