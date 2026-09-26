/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicsanch <vicsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:53:05 by vicsanch          #+#    #+#             */
/*   Updated: 2026/09/26 17:19:11 by vicsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s_len;
	char	*s;

	s_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = malloc(sizeof(char) * (s_len));
	if (!s)
		return (NULL);
	s[0] = 0;
	ft_strlcat(s, s1, s_len);
	ft_strlcat(s, s2, s_len);
	return (s);
}
