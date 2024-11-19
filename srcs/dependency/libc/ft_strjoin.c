/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:23:07 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:48:53 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*join(char *dest, const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		while (s1[j] != '\0')
		{
			dest[j] = s1[j];
			j++;
		}
		i = j;
		j = 0;
		while (s2[j] != '\0')
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	total_size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc((total_size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = join(dest, s1, s2, total_size);
	return (dest);
}
/*int	main()
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = "my favorite animal is";
	str2 = " ";
	str3 = "the nyancat";
	result = ft_strjoin(ft_strjoin(str1, str2), str3);
	//result = ft_strjoin(str1, str3);
	printf("%s\n", result);

	//Test the result

	if (strcmp(result, "my favorite animal is the nyancat"))
		i++;
	printf("%d\n", i);
	while (result[j++] != '\0')
		printf("%d, ", i++);
	printf("\n");


	free(result);
	return (0);
}*/