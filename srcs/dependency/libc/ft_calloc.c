/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjossain <sjossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:10:49 by sjossain          #+#    #+#             */
/*   Updated: 2024/04/16 14:40:07 by sjossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*array;

	total_size = nmemb * size;
	if ((nmemb != 0 && total_size / nmemb != size))
		return (NULL);
	array = malloc(total_size);
	if (array == NULL)
	{
		return (NULL);
	}
	ft_memset(array, 0, total_size);
	return ((void *)array);
}
/*int main()
{
    size_t *array;
    size_t num_elements = SIZE_MAX;

    array = ft_calloc(num_elements, sizeof(size_t));
    array = calloc(num_elements, sizeof(size_t));

    if (array == NULL) {
        printf("Erreur lors de l'allocation de mémoire\n");
        return 1;
    }
    printf("Tableau avant l'initialisation :\n");
    for (size_t i= 0; i < num_elements; i++) {
        printf("%zu ", array[i]);
    }
    printf("\n");
    for (size_t i = 0; i < num_elements; i++) {
        array[i] = i + 1;
    }
    printf("Tableau après l'initialisation :\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%zu ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}*/
