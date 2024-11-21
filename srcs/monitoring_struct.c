/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:09 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:09 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/minishell.h>


void	init_minishell(t_minishell *minishell)
{
	minishell->prompt = NULL;

	minishell->token = malloc(sizeof(t_token));
	if (!minishell->token)
		exit(EXIT_FAILURE);
	minishell->token->token = NULL;
	minishell->token->token_count = 0;
	minishell->token->flag = true;

	minishell->signal = malloc(sizeof(t_signal));
	if (!minishell->signal)
		exit(EXIT_FAILURE);
	minishell->signal->ctrl_touch = NULL;
	minishell->signal->handle = NULL;

	minishell->pars = malloc(sizeof(t_pars));
	if (!minishell->pars)
		exit(EXIT_FAILURE);
}
