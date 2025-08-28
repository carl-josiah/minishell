/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:28:55 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 15:00:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = -1;
	if (!s || !f)
		return ;
	while (s[++i])
		(*f)(i, &s[i]);
	s[i] = '\0';
}

// static void	my_tolower(unsigned int i, char *c)
// {
// 	(void) i;
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c = *c + 32;
// }

// int	main(void)
// {
// 	char	str[6] = "HELLO";
// 	printf("before: %s\n", str);
// 	ft_striteri(str, my_tolower);
// 	printf("after: %s\n", str);
// }