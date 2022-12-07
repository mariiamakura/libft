/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:01:19 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 16:30:16 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = s;
	while (str[i] && n > 0)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
		n--;
	}
	return (0);
}

/* int main()
{
	char c = 'a';
	char word[] = "hallo";
	printf("function: %p\n", memchr(word, c, 4));
	printf("mine: %p\n", ft_memchr(word, c, 4));
} */