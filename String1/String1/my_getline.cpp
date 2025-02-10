/* C program to read line from stream */

#include <stdio.h>
#include <string.h>

#define MAXLENGTH  1000

int my_getline(char *str)
{
	int i = 0;
	char c;
	while ((c = getchar()) != EOF && c != '\n')
	{
		if (i > MAXLENGTH)
			break;

		*str++ = c;
		i++;
	}
	*str = '\0';

	return i;
}
#if 0
int main()
{
	char buff[MAXLENGTH];
	printf("Input line \n");
	int input_len = my_getline(buff);
	printf("input str: %s length: %d str length: %d", buff, input_len, strlen(buff));

}
#endif