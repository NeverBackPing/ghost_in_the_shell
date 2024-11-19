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

void	ft_check_prompt(char *prompt)
{
	int	i = 0;
	while (prompt[i] != '\0')
	{
		printf("String: %s : char : %c\n", prompt, prompt[i]);
		i++;
	}
}
