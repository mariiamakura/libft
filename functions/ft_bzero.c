/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:38:37 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 14:18:24 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/* int main (void)
{
   unsigned char src[6] = "Hello";
   unsigned char src1[6] = "Hello";

   ft_bzero(src, 2);
   bzero(src1, 2);
   
   printf("mine: %s\n",src);
   printf("function: %s\n",src1);
   return (0);
} */