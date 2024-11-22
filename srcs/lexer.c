/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:37 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:37 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/minishell.h>

bool	isbuiltin(const char *tmp_token, t_token *token)
{
	long unsigned int		i;
	const char				*builtin[] = \
		{ "echo", "cd", "pwd", "export", "unset", "env", "exit", NULL};

	i = 0;
	while (i < (sizeof(builtin) / sizeof(builtin[0])) - 1)
	{
		if (ft_strcmp(tmp_token, builtin[i]) == 0)
		{
			token->flag = false;
			return (true);
		}
		i++;
	}
	return (false);
}

bool	ispipe(const char *tmp_token, t_token *token)
{
	if (ft_strcmp(tmp_token, "|") == 0)
	{
		token->flag = false;
		return (true);
	}
	return (false);
}

bool	isstdin(const char *tmp_token, t_token *token)
{
	if (ft_strcmp(tmp_token, "<") == 0)
	{
		token->flag = false;
		return (true);
	}
	return (false);
}

bool	isexpansion(const char *tmp_token, t_token *token)
{
	if (tmp_token[0] ==  '$')
	{
		token->flag = false;
		return (true);
	}
	return (false);
}

bool	isvar(const char *tmp_token, t_token *token)
{
	const char	*equal_pos;
	const char	*content;
	const char	*name;

	equal_pos = ft_strchr(tmp_token, '=');
	name = tmp_token;
	if (ft_isalpha(*name) == false)
		return (false);
	content = equal_pos + 1;
	if (!*content)
		return (false);
	if ((*content == '"' || *content == '\'') && \
		content[ft_strlen(content) - 1] == *content)
		content++;
	else if (content[0] == '"' || content[0] == '\'')
		return (false);
	token->flag = false;
	return (true);
}

bool	isstdout(const char *tmp_token, t_token *token)
{
	if (ft_strcmp(tmp_token, ">") == 0)
	{
		token->flag = false;
		return (true);
	}
	return (false);
}

void	ft_token(t_minishell *minishell)
{
	unsigned long	i;
	t_token			*token;
	char			**tmp_token;

	i = 0;
	token = minishell->token;
	tmp_token = ft_split_token(minishell->prompt, ' ');
	if (!tmp_token)
	{
		//free all struct minishell;
		exit(5);
	}
	token->token_count = ft_array_len(tmp_token);
	token->token = (char **) malloc((token->token_count + 1) * sizeof(char *));
	if (!token->token)
	{
		dest_free(tmp_token);
		//free all struct minishell;
		exit(5);
	}
	while (tmp_token[i] !=  NULL)
	{
		if (token->flag && isbuiltin(tmp_token[i], token))
			token->token[i] = ft_strjoin("BUILTIN: ", tmp_token[i]);
		if (token->flag && ispipe(tmp_token[i], token))
			token->token[i] = ft_strjoin("PIPE: ", tmp_token[i]);
		if (token->flag && isstdin(tmp_token[i], token))
			token->token[i] = ft_strjoin("STDIN: ", tmp_token[i]);
		if (token->flag && isstdout(tmp_token[i], token))
			token->token[i] = ft_strjoin("STDOUT: ", tmp_token[i]);
		if (token->flag && isexpansion(tmp_token[i], token))
			token->token[i] = ft_strjoin("EXPANSION: ", tmp_token[i]);
		if (token->flag && isvar(tmp_token[i], token))
			token->token[i] = ft_strjoin("VARIABLE: ", tmp_token[i]);
		token->flag = true;
		i++;
	}
	token->token[i] = NULL;
	i = 0;
	while (token->token[i] != NULL)
	{
		printf("%s\n", token->token[i]);
		i++;
	}
	dest_free(tmp_token);
}
