/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:19:37 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 15:21:29 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	{
		while (s[i])
		{
			if (s[i] == c)
				return (&((char *)s)[i]);
			i++;
		}
	}
	return (&((char *)s)[i]);
}

/* int main()
{
	char c = 'l';
	char word[] = "hallo";
	printf("function: %p\n", strchr(word, c));
	printf("function: %p\n", ft_strchr(word, c));
}
 */