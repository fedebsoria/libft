/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:21:06 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/12 17:24:02 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*uc_s1;
	const unsigned char	*uc_s2;

	uc_s1 = s1;
	uc_s2 = s2;
	while (n--)
	{
		if (*uc_s1 != *uc_s2)
		{
			return (*uc_s1 - *uc_s2);
		}
		uc_s1++;
		uc_s2++;
	}
	return (0);
}
