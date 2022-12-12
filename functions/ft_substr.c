/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:58:48 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/12 19:06:01 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	max_len;
	char	*p;

	max_len = len;
	if (!s)
		return (0);
	if (len >= ft_strlen(s))
		max_len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	p = malloc((max_len + 1) * sizeof(char));
	if (!p)
		return (0);
	i = 0;
	while (i < max_len)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	*(p + i) = 0;
	return (p);
}

/* int main()
{
	char * s = "";
	printf("%s\n", ft_substr(s, 1, 1));
} */