/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokens.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:39:14 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/19 15:39:37 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	count_tokens(const char *line)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (line[i] && ((line[i] >= 9 && line[i] <= 13) || line[i] == 32))
		i++;
	while (line[i])
	{
		if (flag == 0)
		{
			count++;
			flag = 1;
		}
		while (line[i] && ((line[i] >= 9 && line[i] <= 13) || line[i] == 32))
		{
			flag = 0;
			i++;
		}
		i++;
	}
	return (count);
}
