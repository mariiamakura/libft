/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:24:03 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/13 13:24:25 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	size;

	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2)
		return (0);
	p = malloc(size * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, s1, size);
	ft_strlcat(p, s2, size);
	return (p);
}

/* int main()
{
	char word1[] = "hello";
	char word2[] = " there";
	printf("%s\n", ft_strjoin(word1, word2));
} */