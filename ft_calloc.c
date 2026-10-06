/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:35:07 by vicsanch          #+#    #+#             */
/*   Updated: 2026/10/06 12:29:30 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmmemb == 0 || size == 0)
		return (malloc(1));
	total_size = nmmemb * size;
	if (size != 0 && total_size / size != nmmemb)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
