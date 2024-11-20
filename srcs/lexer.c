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

void	ft_token(t_minishell *minishell)
{
	int		i;
	//t_token	*token;

	i = 0;
	//token = minishell->token;
	while (minishell->prompt[i] != '\0')
	{
		printf("String: %s : char : %c\n", minishell->prompt, minishell->prompt[i]);
		i++;

	}
}
