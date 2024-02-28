/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:53:52 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/23 12:53:52 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*ft_malloc_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_tab(char **tab, int j)
{
	while (j >= 0)
		free(tab[j--]);
	free(tab);
}

static int	ft_fill_tab(char **tab, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = ft_malloc_word(s + i, c);
			if (!tab[j])
			{
				ft_free_tab(tab, j);
				return (0);
			}
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!s || !tab)
		return (NULL);
	if (!ft_fill_tab(tab, s, c))
		return (NULL);
	return (tab);
}
