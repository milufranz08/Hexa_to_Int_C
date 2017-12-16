#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include <stdbool.h>

#define YES 1
#define NO 0


static int getHexa(char string[], int limit) {
	// variables
	int j;
	int counter;

	// get hexadecimal number
	printf("Enter hexadecimal: ");
	for (counter = 0; counter < limit - 1 && j != '\n' && (j = getchar()) != EOF; ++counter) {
		string[counter] = j;
	}

	// assign last value
	if (j == '\n') {
		string[counter] = j;
		++counter;
	}

	string[counter] = '\0';

	return counter;
}

static int htoi(char string[]) {
	// variables
	int hexadecimal;
	int counter = 0;
	int flag = YES;
	int finalNumber = 0;

	// check if hexadecimal number has OX or Ox
	if (string[counter] == 'O') {
		++counter;
		if (string[counter] == 'x' || string[counter] == 'X') {
			++counter;
		}
	}

	// transform
	for (; flag == YES; ++counter) {
		if(string[counter] >= '0' && string[counter] <= '9') {
			hexadecimal = string[counter] - '0';
		}
		else if (string[counter] >= 'a' && string[counter] <= 'f') {
			hexadecimal = string[counter] - 'a' + 10;
		}
		else if (string[counter] >= 'A' && string[counter] <= 'F') {
			hexadecimal = string[counter] - 'A' + 10;
		}
		else {
			flag = NO;
		}

		if (flag == YES) {
			finalNumber = 16 * finalNumber + hexadecimal;
		}

	}

	return finalNumber;
}