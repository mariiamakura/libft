/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:02:08 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/07 16:38:27 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}

/* int main(void)
{
    size_t nmemb = 10;
    size_t size = sizeof(int);
    int *p = ft_calloc(nmemb, size);

    if (p)
    {
        printf("Allocated memory of size %zu bytes\n", nmemb * size);
        printf("Initial values: ");
        for (size_t i = 0; i < nmemb; i++)
            printf("%d ", p[i]);
        printf("\n");

        memset(p, 1, nmemb * size);
        printf("After memset: ");
        for (size_t i = 0; i < nmemb; i++)
            printf("%d ", p[i]);
        printf("\n");

        free(p);
    }
    return 0;
} */
