/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:41:38 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 15:00:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	int		c;
// 	int		cc;
// 
// 	c = 'a';
// 	cc = 'a';
// 	printf("before ft_toupper: %c\n", c);
// 	printf("after ft_toupper: %c\n", ft_toupper(c));
// 	printf("before toupper: %c\n", cc);
// 	printf("after toupper: %c\n", toupper(cc));
// }
