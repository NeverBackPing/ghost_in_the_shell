/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:01 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:01 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <limits.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "libft.h"
# include <readline/readline.h>
# include <readline/history.h>

typedef struct	s_token
{
	int	cmd;
	int	pipe;
	int	red_input;
	int	red_output;
}	t_token;

typedef struct	s_pars
{

}	t_pars;

typedef struct	s_signal
{
	void	*ctrl_touch;
	void	*handle;
}	t_signal;

typedef struct	s_minishell
{
	char	*prompt;

	t_pars		*pars;
	t_signal	*signal;
	t_token		*token;
}	t_minishell;

void	ft_token(t_minishell *minishell);
void	signal_action(t_minishell *minishell);
#endif
