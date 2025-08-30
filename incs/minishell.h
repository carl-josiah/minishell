/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:16:13 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 14:43:37 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft-custom/incs/libft.h"
# include <readline/readline.h>
# include <readline/history.h>
# include <stdlib.h>
# include <stdbool.h>

typedef enum s_token_type
{
	T_NONE,
	T_PIPE,
	T_WORD,
	T_SQUOTE_WORD,
	T_DQUOTE_WORD,
	T_APPEND,
	T_HEREDOC,
	T_REDIR_IN,
	T_REDIR_OUT,
	T_OR,
	T_AND,
	T_RPAREN,
	T_LPAREN,
	T_WILDCARD,
}	t_token_type;

typedef struct s_token
{
	t_token_type	type;
	char			*lexeme;
	struct s_token	*next;
}					t_token;

t_token	*lexer(char *line);

#endif