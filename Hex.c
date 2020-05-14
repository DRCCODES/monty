#include "monty.h"

/**
 * nab_op_spell - checks if str is op function
 * @coin: str passed through
 * @line_n: line Number
 * Return: Function or NULL
 */


void (*nab_op(char *coin, unsigned int n))(stack_t **stack, unsigned int ln)
{
	int i;

	instruction_t ants[] = {
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"add", _add},
		{"swap", _swap},
		{"nop", _nop},
		{NULL, NULL}
		};
	
	for (i = 0; i < 7 ; i++)
	{
		if (strcmp(coin, ants[i].opcode) == 0)
				return (*(ants[i]).f);
	}
	fprintf(stderr, "L%d: unknown instruction %s", n, coin);
	Vimes[1] = 1;
	return (NULL);
}

/**
 * top_of_pile - add to double linked list or creat first node
 * @stack: the double linked list
 * @n: The Num that is the data
 * Return: 0 or 1 if malloc fail
 */


int top_of_pile(stack_t **stack, int n)
{
	stack_t *record;
	
	record = malloc(sizeof(stack_t));
	
	if (record == NULL)
	{
		fprintf(stderr,"Error: malloc failed\n");
		Vimes[1] = 1;
		return (1);
	}
	record->n = n;
	record->next = NULL;
	record->prev = NULL;

	if (*stack == NULL)
	{
		*stack = record;
	}
	else
	{
		(*stack)->prev = record;
		record->next = *stack;
		*stack = record;
	}
	return (0);

}
