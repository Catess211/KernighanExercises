/* C program to perform strcmp */
#include <stdio.h>
#include <string.h>

int my_strcmp(const char *s, char *d)
{
	for (; *s == *d; s++, d++)
	{
		if (*s == '\0')
			return 0;
	}

	return *s - *d;
}

#if 0
int main()
{
	char *src = "Ankana";
	char dest[] = "AnkanaB";

	int diff = my_strcmp(src, dest);
	if (diff == 0)
	{
		printf("Equal \n");
	}
	else
	{
		printf("Not. Diff: %d \n", diff);
	}
	

	return 0;
}
#endif