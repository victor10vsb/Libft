/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:26:20 by vicsanch          #+#    #+#             */
/*   Updated: 2026/09/28 15:15:57 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	size_t	i;
	long	num;

	num = n;
	len = ft_num_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = len;
	str[i] = 0;
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	while (i > 0 && num > 0)
	{
		i--;
		str[i] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_itoa(atoi(argv[1])));
	}
}
*/
