/* C program to perform strcpy */
#include <stdio.h>
#include <string.h>

void my_strcpy(const char *s, char *d)
{
	printf("Copy src %s to dest %s strlen dest: %d \n", s, d, strlen(d));
	/*while (*s != '\0' && *d != '\0')
	{
		*d = *s;
		s++;
		d++;
	}*/
	while ((*d++ = *s++) != '\0');
	printf("Copy src %s to dest %s strlen dest: %d \n", s, d, strlen(d));
}

#if 0
int main()
{
	char *src = "Ankana";
	char dest[] = "Trina";
	printf("Post strcpy: src: %s of len %d dest: %s of len %d\n", src, strlen(src), dest, strlen(dest));
	my_strcpy(src, dest);
	printf("Copy src %s to dest %s strlen dest: %d \n", src, dest, strlen(dest));
	printf("Post strcpy: src: %s dest: %s \n", src, dest);
	return 0;
}
#endif
