/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:53:02 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/09 16:49:26 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != 0)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}

/* int main (void)
{
	char src[] = "aaaa";
    char dest[] = "bbbbbbbbb";

strlcpy(dest, src, 3); 
printf("function: %s\n",dest); 
printf("function: %zu\n",strlcpy(dest, src, 3)); 

char src1[] = "aaaa";
char dest1[] = "bbbbbbbbbbb";
ft_strlcpy(dest1, src1, 3);
printf("mine: %s\n",dest1);
printf("function: %zu\n",ft_strlcpy(dest1, src1, 3)); 
   return (0);
}
 */