/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:24:48 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/28 15:30:06 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove_aux(unsigned char *dest_cpy, unsigned const char *src_cpy,
			size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	unsigned const char	*src_cpy;

	if (dest == NULL && src == NULL)
		return (0);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned const char *)src;
	ft_memmove_aux(dest_cpy, src_cpy, n);
	return (dest);
}

void	*ft_memmove_aux(unsigned char *dest_cpy, unsigned const char *src_cpy,
		size_t n)
{
	size_t	i;

	i = 0;
	if (src_cpy < dest_cpy)
	{
		i = n;
		while (i > 0)
		{
			dest_cpy[i - 1] = src_cpy[i - 1];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dest_cpy);
}
