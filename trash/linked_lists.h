#ifndef LINKED_LISTS_H
# define LINKED_LISTS_H
# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

#endif