#include "monty.h"

/**
 * main - entry for monty to be interpreted
 * ac: argument count
 * av: arguments
 *
 * Return: No idea
 */

int main(int ac, char **av)
{
	FILE *ook
	size_t *stack = NULL;
	unsigned int line_n = 1;
	chr *buff = NULL;
	size_t size;
	void (*op)(stack_t **stack, unsigned int ln);
	char *CMTD[2];
	int no_seg;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n")
		exit(EXIT_FAILURE);
	}
	ook = fopen(av[1], "r")
	if (ook == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while(getline(&buff, &size, ook) != EOF)
	{
	no_seg = cutting_pies(buff, CMTD);/*parse to tokens*/
		/* see if for push*/
		/*Error Check*/
		/*grab OP Functions*/
		/*Error Check*/
		/*Run OP*/
		/*Error Check*/
	}
	/* Free Buff */
	/*Close ook*/
	/*free_all*/
}
