#ifndef MONTY
#define MONTY
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Single Global Varaible */
extern int Vimes[];

/* Munstrum Ridcully: Archchancellor */
void _push(stack_t **stack, unsigned int ln);
void _pall(stack_t **stack, unsigned int ln);
void _pint(stack_t **stack, unsigned int ln);
void _pop(stack_t **stack, unsigned int ln);
void _swap(stack_t **stack, unsigned int ln);

/* Rincewind */
void _add(stack_t **stack, unsigned int ln);
void _nop(stack_t **stack, unsigned int ln);

/* The Librarian */
int cutting_pies(char *buff, char *CMTD[]);
void scrub(char *CMTD[]);
int push_check(char *CMTD[], unsigned ln);
void lost_to_LSPACE(stack_t *stack);
void kicked_out(char *buff, FILE *fp, stack_t *stack);

/* Hex */
void (*nab_op_spell(char *coin, unsigned int line_n))(stack_t **stack, unsigned int ln);
int top_of_pile(stack_t **stack, int n);

#endif
