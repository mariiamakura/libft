/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:32 by mparasku          #+#    #+#             */
/*   Updated: 2023/01/03 14:32:22 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_positive(char *str, long num, size_t len_int)
{
	while (num > 0)
	{
		str[len_int] = 48 + (num % 10);
		num = num / 10;
		len_int--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len_int;
	long	num;

	num = n;
	len_int = int_len(n);
	str = malloc((len_int + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len_int--] = 0;
	if (num == 0)
	{
		str[0] = 48 + num;
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	if (num > 0)
		str = ft_positive(str, num, len_int);
	return (str);
}

/* int	main()
{
	printf("%s\n", ft_itoa(-1234234567));
} */