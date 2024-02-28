/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:21:29 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/12 16:25:48 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if ((unsigned char)*s1 != (unsigned char) *s2)
		{
			if ((unsigned char)*s1 < (unsigned char)*s2)
				return (-1);
			else
				return (1);
		}
		else if (*s1 == '\0')
			break ;
		s1++;
		s2++;
	}
	return (0);
}
