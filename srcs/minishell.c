/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 07:56:35 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 10:10:08 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

int	main(void)
{
	char	*line;

	while (true)
	{
		line = readline("minishell$ ");
		free(line);		
	}
	return (0);
}
