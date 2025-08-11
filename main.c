/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:28:12 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/11 10:07:20 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(int ac, char **av)
{
	char	*str;

	(void) ac;
	(void) av;
	while (1)
	{
		str = readline("minishell$ ");
		free(str);
	}
	return (0);
}
