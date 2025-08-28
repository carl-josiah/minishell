/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:05:24 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 14:37:03 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h"

t_token	*lexer(const char *line)
{
	t_token	*head;
	
	head = NULL;
	while (*line)
	{
		while (ft_isspace(*line))
			line++;
	}
}
