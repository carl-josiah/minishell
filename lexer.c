/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:38:51 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/22 16:20:06 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_token	*new_token(t_token_type type, char *value)
{
	t_token	*token;

	token = malloc(sizeof(*token));
	if (!token)
		return (NULL);
	token->type = type;
	token->value = value;
	token->next = NULL;
	return (token);
}

static void	add_token_back(t_token **head, t_token *new)
{
	t_token	*current;

	if (!*head)
	{
		*head = new;
		return ;
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new;
}

// t_token	*lexer(const char *line)
// {
// 	t_token	*token;

// 	while (*line)
// 	{
// 		while (ft_isspace(*line))
// 			line++;
// 	}
// 	if (*line == '\0')
// 		return (NULL);
// 	return (NULL);
// }

int	main(void)
{
	t_token	*head;

	head = new_token(TOKEN_CMD, "echo");
	// free(head);
	return (0);
}
