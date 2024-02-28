/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:13:58 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/28 15:35:13 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, int unsigned n)
{
	unsigned int	i;
	char			*char_ptr;

	char_ptr = (char *)ptr;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
