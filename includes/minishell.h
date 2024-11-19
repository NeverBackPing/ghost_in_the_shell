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
# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct s_token
{
	int	cmd;
	int	pipe;
	int	red_input;
	int	red_output;
}	t_token;

typedef struct s_pars
{

}	t_pars;

void	ft_check_prompt(char *prompt);


#endif
