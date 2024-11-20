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

bool isbuiltin(t_minishell *minishell)
{
    const char *keywords[] = { "echo", "cd", "pwd", "export", "unset", "env", "exit"};
    for (int i = 0;
         i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

void	ft_token(t_minishell *minishell)
{
	int		i;
	//t_token	*token;

	i = 0;
	//token = minishell->token;
	while (minishell->prompt[i] != '\0')
	{
		if ()

		printf("String: %s : char : %c\n", minishell->prompt, minishell->prompt[i]);
		i++;
	}
}
