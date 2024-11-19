/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:16:58 by sjossain          #+#    #+#             */
/*   Updated: 2024/06/26 15:26:50 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	find_len(const char *s, char c, size_t start)
{
	size_t	len;

	len = 1;
	if (s == (void *)0)
		return (len);
	while (s[start++] != c && s[start] != '\0')
		len++;
	if (s[start] == '\0' && s[start - 1] != c)
		len++;
	return (len);
}

static size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	idx;

	i = 0;
	idx = 0;
	if (s[i] != c && s[i] != '\0')
		i++;
	while (s[idx] != '\0')
	{
		if (s[idx] == c && s[idx + 1] != '\0' && s[idx + 1] != c)
			i++;
		idx++;
	}
	return (i);
}

static size_t	find_index(const char *s, char c, size_t set)
{
	size_t	i;
	size_t	check_set;
	size_t	start;

	i = 0;
	start = 0;
	check_set = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && check_set == set)
			break ;
		if (s[i] == c && s[i + 1] != c)
			check_set++;
		i++;
	}
	start = i;
	return (start);
}

char	**dest_free(char **dest)
{
	size_t	i;

	i = 0;
	while (dest && dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			j;
	size_t			col;
	const size_t	raw = count_word(s, c);
	char			**dest;

	i = 0;
	j = 0;
	col = 0;
	dest = (char **) malloc((raw + 1) * sizeof(char *));
	if (s == NULL || dest == NULL)
		return (NULL);
	while (!(raw == 0 || *s == '\0') && i < raw)
	{
		col = find_len(s, c, find_index(s, c, i));
		dest[i] = (char *) malloc((col + 1) * sizeof(char));
		if (!dest[i])
			return (dest_free(dest));
		while (j++ < col)
			ft_strlcpy(dest[i], &s[find_index(s, c, i)], col);
		j = 0;
		i++;
	}
	return (dest[i] = NULL, dest);
}
/*int	main(void)
{
 	int m;

 	m = 0;
 	char **str;
 	char *str2 = "hello world ahhhh salut";
 	char c = ' ';
 	str =	ft_split(str2, c);
 	while (str[m])
 	{
		ft_putstr(str[m]);
		printf("\n");
 		m++;
 	}
 	dest_free(str);
 	return (0);
}*/
