/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:05:24 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/29 08:46:40 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/lexer.h"

t_token	*lexer(char *line)
{
	t_token	*head;
	
	head = NULL;
	while (*line)
	{
		while (ft_isspace(*line))
			line++;
		if (ft_strchr(OPERATOR_CHARS, *line) != NULL)
			printf("%c ", *line);
		line++;
	}
	(void) head;
	return (NULL);
}
