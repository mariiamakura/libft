/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:01:34 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 15:24:31 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (&((char *)s)[i]);
}

/* int main()
{
	char c = '\0';
	char word[] = "hallo";
	printf("function: %p\n", strrchr(word, c));
	printf("function: %p\n", ft_strrchr(word, c));
} */
