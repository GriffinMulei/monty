#include "monty.h"

/*
 * push - pushes an element to stack
 * @line_number: linenumber being excuted
 * @value:value of int to be pushed
 */

void push(stack_t **stack,unsigned int line_number,int value)
{
	if (stack == NULL)
	{
		fprint(stderr, "Error: stackis NULL\n");
		exit(EXIT_FAILURE);
	}
	int value = atoi(value_str);
	stack_t *new_node = malloc(sizeof(stack_t));
	if  (new_node == NULL)
	{
		fprint(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
