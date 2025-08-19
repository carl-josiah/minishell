/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:28:12 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/19 12:38:04 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>

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

int main(int ac, char **av)
{
	char	*str;

	while (1)
	{
		str = readline("bukoshell$ ");
		if (!str)
			break ;
		if (str && *str)
			add_history(str);
		free(str);
	}
	return (0);
}
