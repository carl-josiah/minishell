/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:38:51 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/22 20:59:03 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_token	*new_token(t_token_type type, char *value)
{
	t_token	*new_token;

	new_token = malloc(sizeof(*new_token));
	if (!new_token)
		return (NULL);
	new_token->type = type;
	new_token->value = value;
	new_token->next = NULL;
	return (new_token);
}

static void	insert_token_end(t_token **head, t_token_type type, char *value)
{
	t_token	*curr;

	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new_token(type, value);
}

static void	print_tokens(t_token *head)
{
	t_token	*curr;
	
	curr = head;
	while (curr)
	{
		printf("[TOKEN_TYPE: %d TOKEN_VALUE: %s] -> ", curr->type, curr->value);
		curr = curr->next;
	}
}

static void	deallocate_tokens(t_token **head)
{
	t_token	*curr;
	t_token	*tmp;

	curr = *head;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
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
	insert_token_end(&head, TOKEN_ARG, "-n");
	print_tokens(head);
	deallocate_tokens(&head);
	return (0);
}
