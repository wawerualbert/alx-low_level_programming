#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
=======
  int num;
num = 97;
while (num <= 122)
putchar(num);
num++;
int p;
p = 97;
while (p <= 122)
{
putchar(p);
p++;
}
putchar('\n');
return (0);
>>>>>>> bd0d6866b8a291a6cd6ac13bca7e46a0becc168c
}

