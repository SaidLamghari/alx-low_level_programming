#include <stdio.h>
/**
 * main - Start of thr program
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, fs = 0, s;

	while (fs < 4000000)
	{
		fs = f1 + f2;

		if ((fs % 2) == 0)
			s = s + fs;

		f1 = f2;
		f2 = fs;
	}
	printf("%lu\n", s);

	return (0);
}
