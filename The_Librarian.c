#include "monty.h"

/**
 * cutting_pies - cut string into tokens
 * @buff: str to cut
 * @CMTD: Cutting my own Throat for  arrays
 * Return: 1
 */

int cutting_pies(char *buff, char *CMTD[])
{
	int i;
	char *coins;

	coins = strtok(buff, " \t\n");


	for (i = 0; coins && i < 2; i++)
	{
		CMTD[i] = coins;

		coins = strtok(NULL, " \t\n");
	}

	return (1);
}
/**
 * scrub - scrub the evidence
 * @CMTD: The one the needs scrubbing
 * Returns N/A
 */

void scrub(char *CMTD[])
{
	int i;

	for (i = 0; i < 2; i++)
		CMTD[i][0] = '\0';
}

/**
 * push_check - check if push and if str is num
 * @CMTD: the one to be check
 * @ln: line number
 * Return: 0 if push, 1 if not
 */

int push_check(char *CMTD[], unsigned int ln)
{
	int i = 0;

	if (strcmp(CMTD[0], "push") == 0)
	{
		if (CMTD[1][i] == '-')
			i++;
		for (; CMTD[1][i] != '\0'; i++)
		{
			if (!isdigit(CMTD[1][i]))
			{
			fprintf(stderr, "L%d: usage: push integer\n", ln);
			Vimes[1] = 1;
			return (1);
			}
		}
		Vimes[0] = atoi(CMTD[1]);
		return (0);
	}
	return (1);
}

/**
 * lost_to_LSPACE - Frees stack for exiting
 * @stack: The Stack to be lost
 * Return N/A
 */

void lost_to_LSPACE(stack_t *stack)
{
	stack_t *OOK;

	while (stack != NULL)
	{
		OOK = stack;
		stack = stack->next;
		free(OOK);
	}
}

/**
 * kicked_out - Booted out of Library
 * @buff: str to free
 * @fp: file to close
 * @stack: stack to free
 * Return N/A
 */

void kicked_out(char *buff, FILE *fp, stack_t *stack)
{
	if (Vimes[1] == 1)
	{
		free(buff);
		fclose(fp);
		lost_to_LSPACE(stack);
		exit(EXIT_FAILURE);
	}

}
