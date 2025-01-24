/* strend implementation using pointers */

#include <stdio.h>
#include <string.h>

int strend(const char *source_str, const char *search_str)
{
	int result = 1;
	const char *first = &search_str[0];

	while (*source_str++ != '\0');
	while (*search_str++ != '\0');

	while (search_str != first)
	{
		if (*source_str-- != *search_str--)
		{
			result = 0;
			break;
		}
	}

	return result;
}
#if 0
int main()
{
	char *source_str = "AnkanaTrinaGingi";
	char *search_str = "TrinaGingi";

	printf("%d \n", strend(source_str, search_str));

	return 0;
}
#endif