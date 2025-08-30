/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 07:56:35 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 14:58:42 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h"

int	main(void)
{
	char		*line;
	t_token		*head;

	head = NULL;
	while (true)
	{
		line = readline("minishell$ ");
		if (!ft_strncmp("eof", line, 3))
			return (free(line), 0);
		if (*line)
			add_history(line);
		head = lexer(line);
		free(line);
	}
	(void) head;
	return (0);
}
