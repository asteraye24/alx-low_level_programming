#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords
 * Return: 0 (success)
 *
 */
int main(void)
{
	int pass, sum;

	srand(time(null));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
	}
	printf("%c", 2772 - sum);

	return (0);
}
