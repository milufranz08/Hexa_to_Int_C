#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include <stdbool.h>
#include "htoi.h"

#define MAX 100

int main(void) {

	char hexa[MAX]; //hexadecimal string
	int value;	// decimal value

	// get hexadecimal number
	getHexa(hexa, MAX);

	// convert hexadecimal to decimal
	value = htoi(hexa);

	printf("The hexidecimal value of %s is %d \n", hexa, value);

	return 0;
}