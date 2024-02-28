/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:28:36 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/12 17:17:30 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*char_ptr = str;

	i = 0;
	while (i != n)
	{
		if (char_ptr[i] == (unsigned char)c)
			return ((void *)(char_ptr + i));
		i++;
	}
	return (NULL);
}
