/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:32:25 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 15:00:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (words);
}

static size_t	count_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	word_count;
	size_t	i;
	char	**str;

	word_count = count_words(s, c);
	i = 0;
	str = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = count_len(s, c);
			str[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	str[i] = NULL;
	return (str);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	char	*str;
// 	char	**array_s;
// 	str = "cool bro nice awesome not nice";
// 	array_s = ft_split(str, '\0');
// 	while (*array_s)
// 		printf("{%s}\n", *array_s++);
// }
