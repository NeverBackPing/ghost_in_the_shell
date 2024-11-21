/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_token.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:01 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:01 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_delim(char c, char delim, int in_double, int in_single)
{
	return (c == delim && !in_double && !in_single);
}

static size_t	count_words(const char *s, char delim)
{
	size_t	count;
	int		in_word;
	int		in_double;
	int		in_single;

	in_word = 0;
	in_single = 0;
	in_double = 0;
	count = 0;
	while (*s)
	{
		if (*s == '\"' && !in_single)
			in_double = !in_double;
		else if (*s == '\'' && !in_double)
			in_single = !in_single;
		if (!is_delim(*s, delim, in_double, in_single) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_delim(*s, delim, in_double, in_single))
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*extract_word(const char **s, char delim)
{
	const char		*start;
	char			*word;
	int				in_double;
	int				in_single;

	in_single = 0;
	in_double = 0;
	start = *s;
	while (**s && (in_double || in_single || \
		!is_delim(**s, delim, in_double, in_single)))
	{
		if (**s == '\"' && !in_single)
			in_double = !in_double;
		else if (**s == '\'' && !in_double)
			in_single = !in_single;
		(*s)++;
	}
	word = malloc(*s - start + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, *s - start);
	if (**s)
		(*s)++;
	return (word);
}

char	**ft_split_token(const char *s, char delim)
{
	size_t	word_count;
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word_count = count_words(s, delim);
	result = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == delim && *s)
			s++;
		if (*s)
		{
			result[i] = extract_word(&s, delim);
			if (!result[i])
				return (dest_free(result));
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}
