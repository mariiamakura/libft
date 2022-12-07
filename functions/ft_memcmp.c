/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:30:17 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 18:38:02 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (void *)s1;
	str2 = (void *)s2;
	while (*str1 && *str2 && (n > 0))
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(str1 + n) - *(str2 + n));
}

/* int main()
{
	char s1[] = "hel";
	char s2[] = "hel";
	printf("function: %i\n", memcmp(s1, s2, 3));
	printf("mine: %i\n", ft_memcmp(s1, s2, 3));
} */