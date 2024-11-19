/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:08:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 23:09:14 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*char	to_lowercase(unsigned int index __attribute__((unused)), char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}
int main ()
{
	char	str[] = "HELLO WORLD!";
	char	*result;

	result = ft_striteri(str, to_lowercase);
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
