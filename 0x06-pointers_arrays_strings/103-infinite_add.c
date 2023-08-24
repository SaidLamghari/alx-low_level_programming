#include "main.h"
/**
 * *infinite_add - start of the program that adds two numbers.
 * @n1: string 1
 * @n2: string 2
 * @r:  the result
 * @size_r: size
 * Return:  the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, i1, i2, k;
	int len1 = 0, len2 = 0, len;
	int sum, carry = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 > len2)
		len = len1;
	else
		len = len2;
	if (len + 1 > size_r)
		return (0);
	i = len - 1;
	i1 = len1;
	i2 = len2;
	r[len] = '\0';
	while (i >= 0)
	{
		sum = carry;
		if (i1 >= 0)
		{
			i1--;
			sum = sum + n1[i1] - 48;
		}
		if (i2 > 0)
		{
			i2--;
			sum = sum + n2[i2] - 48;
		}
		carry = sum / 10;
		r[i] = (sum % 10) + 48;
		i--;
	}
	if (carry == 1)
	{
		r[len + 1] = '\0';
		if ((len + 2) > size_r)
			return (0);
		for (k = len; k >= 0; k--)
			r[k + 1] = r[k];
		r[0] = carry + 48;
	}
	return (r);
}
