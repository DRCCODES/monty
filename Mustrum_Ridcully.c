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
	top_of_pile(stack, vimes[0]);
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
		return (0);

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
	stack_t *nobby = *stack

	if (nobby == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ln);
		Vimes[1] = 1;
	}
	else if (nobby->next == NULL)
	{
		*stack = nobby->next;
		(*stack)->prev = NULL;
		free(nobby);
	}
	else
	{
		nobby = nobby->next;
		free(*stack);
		*stack = nobby;
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
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln)
		Vimes[1] = 1;
	}
	else
	{
		sgtcolon = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = sgtcolon;
	}
}

