/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:31:35 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/15 14:38:16 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	size_t	len;

	len = ft_strlen(src) + 1;
	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, src, len);
	return (str);
}
