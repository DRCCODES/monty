#include "monty.h"

/**
 * _add - addes first and 2nd n then beheads
 * @stack: the double linked list
 * @ln: line number
 * Returns N/A
 */

void _add(stack_t **stack, unsigned int ln)
{
	int The_Bursar;
	stack_t *accounts = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't add, stack too short\n", ln);
	Vimes[1] = 1;
	}
	else
	{
		The_Bursar = (*stack)->n + (*stack)->next->n;
		*stack = accounts->next;
		(*stack)->prev == NULL;
		free(accounts);
		accounts = NULL;
		(*stack)->n = The_Bursar;
	}
}

/**
 * _nop - Like A Good Wizard It Does Nothing
 * @stack: the double linked list of DOOM!!!
 * @ln: Line Number!
 * Returns Lazy Wizards
 */

void _nop(stack_t **stack, unsigned int ln)
{
	void(stack);
	void(ln);
}
