#include "monty.h"

/**
 * _push - pushes int to stack
 *
 * @stack: head of stack
 * @ln: line number
 *
 * Return: N/A
 */

void _push(stack_t **stack, unsigned int ln)
{
	ln = ln; 
	top_of_pile(stack, Vimes[0]);
}

/**
 * _pall - printall elemnts in stack
 * @stack: The double linked list
 * @ln: line number
 * Return N/A
 */

void _pall(stack_t **stack, unsigned int ln)
{
	stack_t *press = (*stack);

	ln = ln;

	if (press == NULL)
		return;

	while (press != NULL)
	{
		printf("%d\n", press->n);
		press = press->next;
	}

}
/**
 *  _pint - print head int
 *  @stack: the stack to print from
 *  @ln: line number
 *  Return N/A
 */

void _pint(stack_t **stack, unsigned int ln)
{
	if (*stack == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", ln);
	Vimes[1] = 1;
	}
	else
		printf("%d\n", (*stack)->n);
}

/**
 * _pop - behead the stack
 * @stack: The criminal to be beheaded
 * @ln: line number
 * Return N/a
 */

void _pop(stack_t **stack, unsigned int ln)
{
	stack_t *nobby;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ln);
		Vimes[1] = 1;
		return;
	}
	nobby = (*stack);
	if (nobby->next == NULL)
	{
		free(nobby);
		(*stack) = NULL;
		return;
	}
	else
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
		free(nobby);

		return;
	}
}
/**
 * _swap - swap 1st and 2nd value in stack
 * @stack: the double linked list
 * @ln: line number
 * Return N/A
 */

void _swap(stack_t **stack, unsigned int ln)
{
	int sgtcolon;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln);
		Vimes[1] = 1;
		return;
	}
	else
	{
		sgtcolon = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = sgtcolon;
	}
}

