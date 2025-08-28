/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:27:29 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 15:00:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (haystack[++i])
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle [j] && i + j < len)
		{
			if (needle[++j] == '\0')
				return ((char *) haystack + i);
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[11] = "HelloGoodt";
// 	char	needle[6] = "Good";
// 	size_t	len;

// 	len = 11;
// 	printf("%s\n", ft_strnstr(haystack, needle, len));
// }