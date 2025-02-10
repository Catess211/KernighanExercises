/* Takes a bunch of lines (character array) and sorts them using quick sort */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAXLINES   100
#define LINELENGTH 50


void readlines(char *lineptr[], int nlines)
{
	for (int i = 0; i < nlines; i++)
	{
		printf("Original Enter line %d \n", i);
		fflush(stdout);
		//*lineptr[i] = '\0';
		lineptr[i] = (char*)malloc(LINELENGTH * sizeof(char));
		if (fgets(lineptr[i], LINELENGTH, stdin) == NULL)
		{
			break;
		}
		//lineptr[i][strcspn(lineptr[i], "\n")] = '\0';
	}
}

void writelines(char *lineptr[], int nlines)
{
	for (int i = 0; i < nlines; i++)
	{
		printf("%s \n", lineptr[i]);
		fflush(stdout);
	}
}

void swap(char *lineptr[], int i, int j)
{
	char *temp;
	temp = lineptr[i];
	lineptr[i] = lineptr[j];
	lineptr[j] = temp;
}

int createPartition(char *lineptr[], int left, int right)
{
	int i, last;

	swap(lineptr, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
	{
		printf("Comparing %s and %s \n", lineptr[i], lineptr[left]);
		if (strcmp(lineptr[i], lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	}

	swap(lineptr, left, last);

	return last;
}

void qsort(char *lineptr[], int left, int right)
{
	if (left >= right)
		return;

	int index = createPartition(lineptr, left, right);
	qsort(lineptr, left, index - 1);
	qsort(lineptr, index + 1, right);
}

#if 0
int main()
{
	int nlines;
	printf("nlines? \n");
	fflush(stdout);
	scanf_s("%d", &nlines);
	getchar();
	char **lineptr = (char**)malloc(nlines * sizeof(char));
	readlines(lineptr, nlines);
	printf("Input: \n");
	writelines(lineptr, nlines);
	qsort(lineptr, 0, nlines - 1);
	printf("Output: \n");
	writelines(lineptr, nlines);

	return 0;
}
#endif
