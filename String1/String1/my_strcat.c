/* C program to perform strcat */
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void my_strcat(const char *src, const char *add, char *temp)
{	
	while (*src != '\0')
	{
		*temp++ = *src++ ;
	}

	while (*add != '\0')
	{
		*temp++ = *add++;
	}

	*temp = '\0';
}

#if 0
int main()
{
	char *src = "Ankana";
	char *add = "AnkanaBTrina";
	int concat_len = strlen(src) + strlen(add) +1;
	char *temp = (char*)malloc(concat_len * sizeof(char));
	printf("temp len: %d \n", strlen(temp));
	my_strcat(src, add, temp);
	src = temp;
	printf("52 String src: %s len %d concat_len : %d \n", src, strlen(src), concat_len);
	return 0;
}
#endif