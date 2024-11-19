/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:23:07 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/16 15:10:40 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((slen <= start))
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start++];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char *str;
	str = ft_substr("tripouille", 1, 1);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
