/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:38:51 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/20 12:54:37 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	is_special(char *str)
{
	if (*str == '>')
	{
		if (*(str++) == '>')
			return (2);
		else
			return (1);
	}
	if (*str == '<')
	{
		
	}
}

int	lexer(char *str, t_token_type type, t_token tokens)
{
	while (ft_isspace(*str))
		str++;
	while (*str)
	{
		if (is_special(str))
	}
}
