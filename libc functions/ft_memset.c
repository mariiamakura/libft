/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:10:01 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 14:12:53 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* int main (void)
{
   unsigned char src[15] = "12345678904444";
   unsigned char src1[15] = "12345678904444";

   ft_memset(src, '1', 10);
   memset(src1, '1', 10);
   
   printf("mine: %s\n",src);
   printf("function: %s\n",src1);
   
   return (0);
} */
