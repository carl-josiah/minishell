/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:00:51 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 15:00:22 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	node = lst;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*Node1 = ft_lstnew("Hello");
// 	t_list	*Node2 = ft_lstnew("Hello");
// 	t_list	*Node3 = ft_lstnew("Hello");
// 	ft_lstadd_back(&Node1, Node2);
// 	ft_lstadd_back(&Node2, Node3);
// 	printf("%d\n", ft_lstsize(Node1));
// }