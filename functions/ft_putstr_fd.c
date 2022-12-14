/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:44:22 by mparasku          #+#    #+#             */
/*   Updated: 2022/12/14 16:00:31 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/* int main()
{
	int	fd;
	fd = open("hi", O_WRONLY | O_CREAT, S_IRWXU | S_IWUSR);
	printf("%i\n", fd);
	ft_putstr_fd("hello", fd);
} */
