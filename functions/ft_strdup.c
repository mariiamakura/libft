/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:44:29 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/09 16:33:28 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;

	p = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (p == 0)
		return (0);
	ft_strlcpy(p, s, (ft_strlen(s) + 1));
	return (p);
}

/* int main()
{
    char *str = "Hello, world!";
    char *copy = strdup(str);
	char *mycopy = ft_strdup(str);

    printf("Original string: %s\n", str);
    printf("Copy of string: %s\n", copy);int main()
{
    char *str = "Hello, world!";
    char *copy = strdup(str);
	char *mycopy = ft_strdup(str);

    printf("Original string: %s\n", str);
    printf("Copy of string: %s\n", copy);
	printf("Mycopy of string: %s\n", mycopy);

    free(copy);
	free(mycopy);

    return 0;
}

	printf("Mycopy of string: %s\n", mycopy);

    free(copy);
	free(mycopy);

    return 0;
}
 */