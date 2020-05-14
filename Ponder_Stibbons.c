#include "monty.h"


/**
 * _sub - sub 2nd from 1st in stack
 * @stack: the double linked list
 * @ln: line number
 * Return: N/A
 */

void _sub(stack_t **stack, unsigned int ln)
{
	int The_Bursar;
	stack_t *accounts = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", ln);
		Vimes[1] = 1;
	}
	else
	{
		The_Bursar = (*stack)->next->n - (*stack)->n;
		*stack = accounts->next;
		free(accounts);
		accounts = NULL;
		(*stack)->n = The_Bursar;
	}
}

/**
 * _div - div 2nd from 1st in stack
 * @stack: the double linked list
 * @ln: line number
 * Return: N/A
 */

void _div(stack_t **stack, unsigned int ln)
{
	int The_Bursar;
	stack_t *accounts = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", ln);
		Vimes[1] = 1;
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", ln);
		Vimes[1] = 1;
	}
	else
	{
		The_Bursar = (*stack)->next->n / (*stack)->n;
		*stack = accounts->next;
		free(accounts);
		accounts = NULL;
		(*stack)->n = The_Bursar;
	}
}
/**
 * _mul - mul 2nd from 1st in stack
 * @stack: the double linked list
 * @ln: line number
 * Return: N/A
 */

void _mul(stack_t **stack, unsigned int ln)
{
	int The_Bursar;
	stack_t *accounts = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", ln);
		Vimes[1] = 1;
	}
	else
	{
		The_Bursar = (*stack)->n * (*stack)->next->n;
		*stack = accounts->next;
		free(accounts);
		accounts = NULL;
		(*stack)->n = The_Bursar;
	}
}
/**
 * _mod - mod 2nd from 1st in stack
 * @stack: the double linked list
 * @ln: line number
 * Return: N/A
 */

void _mod(stack_t **stack, unsigned int ln)
{
	int The_Bursar;
	stack_t *accounts = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", ln);
		Vimes[1] = 1;
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", ln);
		Vimes[1] = 1;
	}
	else
	{
		The_Bursar = (*stack)->next->n % (*stack)->n;
		*stack = accounts->next;
		free(accounts);
		accounts = NULL;
		(*stack)->n = The_Bursar;
	}
}
