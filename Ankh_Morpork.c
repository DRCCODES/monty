#include "monty.h"

int Vimes[2] = {0, 0};

/**
 * main - entry for monty to be interpreted
 * @ac: argument count
 * @av: arguments
 *
 * Return: No idea
 */

int main(int ac, char **av)
{
	FILE *ook;
	stack_t *stack = NULL;
	unsigned int line_n = 1;
	char *buff = NULL;
	size_t size;
	void (*spell)(stack_t **stack, unsigned int ln);
	char *CMTD[2];
	int no_seg;

	check_ac(ac);
	ook = fopen(av[1], "r");
	if (ook == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &size, ook) != EOF)
	{
	if (empty_check(buff))
	{
	line_n++;
	continue;
	}
	no_seg = cutting_pies(buff, CMTD);/*parse to coins*/
	no_seg = no_seg;
	push_check(CMTD, line_n);	/* see if for push*/
	kicked_out(buff, ook, stack);	/*Error Check*/
	spell = nab_op(CMTD[0], line_n);	/*grab OP Functions*/
	kicked_out(buff, ook, stack);	/*Error Check*/
	spell(&stack, line_n);	/*Run OP*/
	kicked_out(buff, ook, stack);	/*Error Check*/
	line_n++;
	scrub(CMTD);
	}
	free(buff);	/* Free Buff */
	fclose(ook);	/*Close ook*/
	lost_to_LSPACE(stack);	/*free_all*/
	return (0);
}
