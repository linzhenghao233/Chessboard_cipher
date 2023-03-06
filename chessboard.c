#include <stdio.h>
#include <ctype.h>

int main(void) {
	int chessboard[6][6];
	int row, col, letter, ch;
	letter = 'A';

	for (row = 1; row <= 5; row++) {
		for (col = 1; col <= 5; col++) {
			chessboard[row][col] = letter;
			letter++;
			if (letter == 'J')
				letter++;
		}
	}

	printf("enter your name:");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			putchar(ch);

		for (row = 1; row <= 5; row++) {
			for (col = 1; col <= 5; col++) {
				if (toupper(ch) == chessboard[row][col])
					printf("%d%d ", row, col);
			}
		}
		if (toupper(ch) == 'J')
			printf("24 ");
	}

	return 0;
}