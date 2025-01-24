/* C program to convert integer to character*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RESULT_LENGTH 33

void swap(char *buffer, int start, int end)
{
	
	char temp;
	temp = *(buffer + start);
	printf("swap temp: %c start: %d end: %d \n", temp, start, end);
	*(buffer + start) = *(buffer + end);
	*(buffer + end) = temp;
}

void my_itoa(int number, int base, char *result)
{
	int count = 0;
	int rem;

	while (number)
	{
		printf("%d\n", number);
		rem = number % base;
		number -= rem;
		number /= base;
		*result++ = rem + '0';
		printf("22 reslt %s rem %d \n", result, rem);
		if (++count > RESULT_LENGTH)
			break;
	}

	*result = '\0';
}

int main()
{
	char *buffer = (char*)malloc(34 * sizeof(char));
	int number = 567;
	int base = 10;
	my_itoa(number, base, buffer);
	printf("Reverse Result: %s \n", buffer);

	int end = strlen(buffer)-1;
	int start = 0;

	while (start < end)
	{
		if (*(buffer + start) != *(buffer + end))
			swap(buffer, start, end);

		start++;
		end--;
	}

	printf("Result: %s", buffer);

	return 0;
}
