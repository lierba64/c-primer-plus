#include <stdio.h>

int main(void)
{
	int true_val = (7 > 1);
	int false_val = (1 == 2);

	printf("true = %d, false = %d\n", true_val, false_val);
	getchar();
	return 0;
}