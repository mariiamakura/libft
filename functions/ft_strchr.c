/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mishamakura <mishamakura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:19:37 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/08 15:50:01 by mishamakura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0 && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/* int main()
{
	char c = 'l';
	char word[] = "hallo";
	printf("function: %p\n", strchr(word, c));
	printf("function: %p\n", ft_strchr(word, c));
}
 */