/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:05:54 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 14:59:34 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c1;
// 	char	c2;

// 	c1 = 'S';
// 	c2 = '2';
// 	printf("ft_isalpha: %d\n", ft_isalpha(c1));
// 	printf("ft_isalpha: %d\n", ft_isalpha(c2));
// 	printf("isalpha: %d\n", isalpha(c1));
// 	printf("islpha: %d\n", isalpha(c2));
// }
