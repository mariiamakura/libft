/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:21:38 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/14 14:43:15 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write (fd, &c, 1);
}

/* int main()
{
	int	fd;
	fd = open("hi", O_WRONLY | O_CREAT, S_IRWXU | S_IWUSR);
	printf("%i\n", fd);
	ft_putchar_fd('T', fd);
} */