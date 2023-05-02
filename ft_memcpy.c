/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:49:06 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 14:12:47 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/* int main (void)
{
   unsigned char src[] = "123";
   unsigned char dest[] = "444444";

memcpy(dest, src, 9); 
printf("function: %s\n",dest); 
	ft_memcpy(dest, src, 3);
   printf("mine: %s\n",dest);
   
   return (0);
} */