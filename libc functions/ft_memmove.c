/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:35:59 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/06 14:12:50 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	temp[sizeof((unsigned char *)src)];
	size_t			i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (i < len)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}

/* int main (void)
{
   unsigned char src[] = "aaaaa";
   unsigned char dest[] = "";

memmove(dest, src, 34); 
printf("function: %s\n",dest); 
ft_memmove(dest, src, 3);
printf("mine: %s\n",dest);
   
   return (0);
} */