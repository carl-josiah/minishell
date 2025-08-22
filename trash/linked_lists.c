#include "linked_lists.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(*node));
	node->value = value;
	node->next = NULL;
}

void	print_list(t_node *head)
{
	t_node	*curr;

	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", curr->value);
		curr = curr->next;
	}
}

void	insert_end(t_node **head, int value)
{
	t_node	*new_node;
	t_node	*curr;

	new_node = malloc(sizeof(t_node *));
	if (!new_node)
		exit(1) ;
	new_node->value = value;
	new_node->next = NULL;
	curr = *head;
	while (curr->next)
		curr = curr->next;
	curr->next = new_node;
}

void	deallocate_list(t_node **head)
{
	t_node	*curr;
	t_node	*tmp;
	
	curr = *head;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}

void	insert_beginning(t_node **head, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		exit (1);
	new_node->value = value;
	new_node->next = *head;
	*head = new_node;
}

void	insert_after(t_node *node, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		exit (1);
	new_node->value = value;
	new_node->next = node->next;
	node->next = new_node;
}

// int	main(void)
// {
// 	t_node	*head;

// 	head = new_node(0);
// 	insert_after(head, 5);
// 	insert_beginning(&head, -5);
// 	insert_end(&head, 10);
// 	print_list(head);
// 	deallocate_list(&head);
// 	return (0);
// }

// int	main(void)
// {
// 	int	i = 0;
// 	int	nums[4] = {-5, 0, 5, 10};

// 	for (int i = 0; i < 4; i++)
// 		printf("%d\n", nums[i]);
// 	return (0);
// }
