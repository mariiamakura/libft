/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:25:07 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 15:59:44 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (n > 0))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/* int main()
{
	char s1[] = "hallo";
	char s2[] = "h";
	printf("function: %i\n", strncmp(s1, s2, 1));
	printf("mine: %i\n", ft_strncmp(s1, s2, 1));
} */