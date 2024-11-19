/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:48:45 by sjossain          #+#    #+#             */
/*   Updated: 2024/08/07 12:48:45 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*check_str(char *buf)
{
	char	*token;

	token = 0;
	if (!buf)
		return (NULL);
	token = (char *)malloc((strlen(buf) + 1) * sizeof(char));
	if (token == NULL)
		return (NULL);
	ft_strlcpy(token, buf, strlen(buf) + 1);
	return (token);
}

int	return_error(char *buf, char *token, size_t pos)
{
	if (!buf || !token)
		return (1);
	if (pos >= ft_strlen(buf))
		return (free(token), token = NULL, buf = NULL, 1);
	return (0);
}

char	*init_buff(char *buf, char *token, char *str)
{
	buf = str;
	if (token)
	{
		free(token);
		token = NULL;
	}
	return (buf);
}

char	*ft_strtok(char *str, const char delimiter)
{
	int				i;
	static size_t	pos = 0;
	static char		*buf;
	static char		*token;

	if (str)
	{
		pos = 0;
		token = NULL;
		buf = init_buff(buf, token, str);
		token = check_str(buf);
	}
	if (return_error(buf, token, pos))
		return (NULL);
	ft_memset(token, 0, ft_strlen(buf) + 1);
	i = 0;
	while (pos < ft_strlen(buf))
	{
		if (buf[pos] == delimiter)
			return (pos++, token);
		token[i++] = buf[pos++];
	}
	return (token);
}
/*int main(void)
{
	char *buf = "hello world 1a 2b 3c";
	char *token = ft_strtok(buf, ' ');
	while (1)
	{
		printf("%s\n", token);
		token = ft_strtok(NULL, ' ');
		if (token == NULL)
			break ;
	}
	return (0);
}*/