/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:28:12 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/22 15:10:45 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int ac, char **av, char **env)
{
	t_token			*tokens;
	const char		*line;

	(void) ac;
	(void) av;
	while (1)
	{
		line = readline("bukoshell$ ");
		if (!line)
			break ;
		if (line && *line)
			add_history(line);
		tokens = lexer(line);
		free((char *)line);
	}
	return (0);
}
