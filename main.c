/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 07:28:12 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/15 08:25:16 by ccastro          ###   ########.fr       */
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
}

int main(int ac, char **av)
{
	char	*str;

	while (1)
	{
		str = readline("bukoshell$ ");
		if (!str)
			break ;
		// printf("tokens: %d\n", count_tokens(str));
		free(str);
	}
	// printf("tokens: %d\n",
	count_tokens(av[1]);
	return (0);
}
