/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:58:48 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/07 19:22:54 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!s)
		return (0);
	p = malloc((len + 1) * sizeof(*s));
	if (p == 0)
		return (0);
	if (start > ft_strlen(s))
	{
		*p = 0;
		return (p);
	}
	i = 0;
	while (i < len)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	*(p + i) = 0;
	return (p);
}

/* int main()
{
	char word[] = "Hello!";
	printf("%s\n", ft_substr(word, 1, 9));
} */