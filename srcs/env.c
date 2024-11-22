/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 16:46:09 by speladea          #+#    #+#             */
/*   Updated: 2024-11-19 16:46:09 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/minishell.h>

void	init_env(t_env *env)
{
	env->pwd = getenv( "PWD" );
	env->home = getenv( "HOME" );
	env->path = getenv( "PATH" );
	env->user = getenv( "USER" );
	env->shell = getenv( "SHELL" );
	env->odl_pwd = getenv( "PWD" );
	env->logname = getenv( "LOGNAME" );
	env->hostname = getenv( "HOSTNAME" );
}
