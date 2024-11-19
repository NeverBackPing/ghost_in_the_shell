/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:31:46 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/09 21:47:36 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	check_sign(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

size_t	check_size(long n)
{
	long	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

void	reverse_string(char *str, int start, int end)
{
	char	temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

void	check_for_revers(int n, char *dest, int i)
{
	if (n < 0)
		reverse_string(dest, 1, i - 1);
	else
		reverse_string(dest, 0, i - 1);
}

char	*ft_itoa(int n)
{
	int		i;
	long	neg;
	char	*dest;

	i = check_sign(n);
	if (check_sign(n))
		neg = (long)n * -1;
	else
		neg = (long)n * 1;
	dest = malloc(((check_size(neg) + 1) + check_sign(n)) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (neg == 0 || n == -0)
		return (dest[0] = '0', dest[1] = '\0', dest);
	if (check_sign(n))
		dest[0] = '-';
	while (neg)
	{
		dest[i++] = neg % 10 + '0';
		neg = neg / 10;
	}
	check_for_revers(n, dest, i);
	return (dest[i] = '\0', dest);
}
/*int	main()
{
	char	*result = ft_itoa(-999);
	printf("hello \n%s\n", result);
	free(result);
	return (0);
}*/
