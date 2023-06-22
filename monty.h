#ifndef MONTY_H
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous element of the stack (or queue)
 * @next: Pointer to the next element of the stack (or queue)
 *
 * Description: Doubly linked list node structure for a stack or queue
 */
typedf struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
	stack_t;
}

/* function prototypes */
 void monty_push(stack_t **stack, unsighned int line_number);
