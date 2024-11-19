/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:37:49 by sjossain          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:13 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	neg;
	char	c;

	neg = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		neg = (long)n * -1;
	}
	else
		neg = (long)n * 1;
	if (neg >= 10)
		ft_putnbr_fd(neg / 10, fd);
	c = neg % 10 + '0';
	ft_putchar_fd(c, fd);
}
/*int main()
{
	FILE *fichier;
    int caractere;

	caractere = INT_MAX;

	fichier = fopen("exemple.txt", "w" "r");
	if (fichier == NULL)
		return (1);
	int file = fileno(fichier);
	ft_putnbr_fd(caractere, file);
	printf("\n");

	fclose(fichier);
}*/