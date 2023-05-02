/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:17:01 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 14:13:29 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = dst_len;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

/* int main (void)
{
	char src[] = "aaaa";
    char dest[] = "bb";

strlcat(dest, src,11); 
printf("function: %s\n",dest); 
printf("function: %zu\n",strlcat(dest, src, 11)); 

char src1[] = "aaaa";
char dest1[] = "bb";
ft_strlcat(dest1, src1, 11);
printf("mine: %s\n",dest1);
printf("function: %zu\n",ft_strlcat(dest1, src1, 11)); 
   return (0);
}
 */