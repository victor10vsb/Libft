/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:14:48 by vicsanch          #+#    #+#             */
/*   Updated: 2026/09/30 20:26:58 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"
// int	main(void)
// {
// 	t_list	*n1;
// 	t_list	*n2;
// 	t_list	*n3;

// 	n1 = ft_lstnew("uno");
// 	n2 = ft_lstnew("dos");
// 	n3 = ft_lstnew("tres");

// 	n1->next = n2;
// 	n2->next = n3;

// 	printf("Tamaño: %u\n", ft_lstsize(n1));

// 	free(n3);
// 	free(n2);
// 	free(n1);
// 	return (0);
// }
