#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

# define NUM 0
# define OPS 1

typedef struct s_value 
{
	int		num;
	char	op;
}			t_value;

typedef struct s_list
{
	int				type;
	t_value			value;
	struct s_list	*left;
	struct s_list	*right;
}					t_list;

int	calculated(t_list *head)
{
	int	num;

	num = 0;
	if (head->value.op == '*')
		num = head->left->value.num * head->right->value.num;
	if (head->value.op == '/')
		num = head->left->value.num / head->right->value.num;
	if (head->value.op == '+')
		num = head->left->value.num + head->right->value.num;
	if (head->value.op == '-')
		num = head->left->value.num - head->right->value.num;
	return (num);
}

int	main(int argc, char *argv[])
{
	// Tree (3 nodes)
	t_list	*head;
	t_list	*left;
	t_list	*right;

	head = malloc(sizeof(*head));
	left = malloc(sizeof(*left));
	right = malloc(sizeof(*right));

	head->type = OPS;
	head->value.op = '+';
	head->left = left;
	head->right = right;

	left->type = NUM;
	left->value.num = 10;
	left->left = NULL;
	left->right = NULL;

	right->type = NUM;
	right->value.num = 5;
	right->left = NULL;
	right->right = NULL;

	// Execution
	printf("Result: %d\n", calculated(head));
	return (0);
}
