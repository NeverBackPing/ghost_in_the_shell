/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:37:49 by sjossain          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:13 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*int main()
{
	FILE *fichier;
    char *caractere;

	caractere = "HEllo 42 boyz";

	fichier = fopen("exemple.txt", "w" "r");
	if (fichier == NULL)
		return (1);
	int file = fileno(fichier);
	ft_putstr_fd(caractere, file);
	printf("\n");

	fclose(fichier);
}*/
