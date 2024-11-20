/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:09 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:09 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/minishell.h>

int	main(void)
{
	t_minishell	minishell;

	main_signal();
	while (1)
	{
		minishell.prompt = readline("GhostInTheShell> ");
		if (!minishell.prompt)
			break;
		add_history(minishell.prompt);
		ft_token(&minishell);
		free(minishell.prompt);
	}
	return (0);
}
