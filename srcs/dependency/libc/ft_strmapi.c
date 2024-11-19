/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:08:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 23:09:14 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*char to_uppercase(unsigned int index __attribute__((unused)), char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}
int main ()
{
	char	str[] = "Hello, World!";
	char	*result;

	result = ft_strmapi(str, to_uppercase);
	if (!result)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original string: %s\n", str);
	printf("Modified string: %s\n", result);
	free(result);
	return (0);
}*/