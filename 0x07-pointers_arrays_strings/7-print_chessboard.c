#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @xa: The chessboard array.
 */
void print_chessboard(char xa[8][8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", xa[i][j]);
		}
		printf("\n");
	}
}
