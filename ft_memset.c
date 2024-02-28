/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:15:27 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/28 15:29:56 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, int unsigned n)
{
	unsigned int	i;
	char			*char_ptr;

	if (x > 255 || x < -128)
		x = x % 256;
	char_ptr = (char *)ptr;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = x;
		i++;
	}
	return (ptr);
}

