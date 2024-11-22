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
	size_t	token_count;
	char	*builtin;
	char	*command;
	char	*flag_cmd;
	char	*redirection;
	char	*pipe;
	char	*string;
	char	*operator;
	char	**token;
	bool	flag;
}	t_token;

typedef struct	s_pars
{

}	t_pars;

typedef struct	s_env
{
	char	*path;
	char	*home;
	char	*user;
	char	*shell;
	char	*pwd;
	char	*odl_pwd;
	char	*logname;
	char	*hostname;
}	t_env;

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
	t_env		*env;
}	t_minishell;
//ENV
void	init_env(t_env *env);
//MONITORING_STRUCT
void	init_minishell(t_minishell *minishell);
//LEXER
void	ft_token(t_minishell *minishell);
bool	isbuiltin(const char *tmp_token, t_token *token);
bool	ispipe(const char *tmp_token, t_token *token);
//SIGNAL
void	main_signal();

#endif
