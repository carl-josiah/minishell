/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 07:56:35 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 14:11:32 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/minishell.h"

int	main(void)
{
	const char		*line;
	t_token			*head;

	head = NULL;
	while (true)
	{
		line = readline("minishell$ ");
		if (!ft_strmp("eof", line, 3))
			return (free(line), 0);
		head = lexer(line);
		free(line);
	}
	return (0);
}
