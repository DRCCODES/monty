#include "monty.h"

/**
 * nab_op - checks if str is op function
 * @coin: str passed through
 * @n: line Number
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
		{"pint", _pint},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
		};

	for (i = 0; i < 11; i++)
	{
		if (strcmp(coin, ants[i].opcode) == 0)
			return (*(ants[i]).f);
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", n++, coin);
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
		fprintf(stderr, "Error: malloc failed\n");
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

/**
 * empty_check - checks if empty line
 * @buff: the line to check
 * Return: 0 if populated 1  if empty
 */

int empty_check(const char *buff)
{
	while (*buff != '\0')
	{
		if (!isspace(*buff))
			return (0);
		buff++;
	}
	return (1);
}

/**
 *  check_ac - checks ac number
 *  @ac: the arguments to be counted
 *  Return: N/A
 */

void check_ac(int ac)
{
	if (ac != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
}
