/* C program to return index of source string if and where a search string occurs */
#include <stdio.h>
#include <string.h>

int strindex(const char *source, const char *search)
{
	int result = -1;
	int source_len = strlen(source);
	int search_len = strlen(search);
	if (search_len > source_len)
		return result;

	while (*source++ != '\0')
	{
		if ((*source == *search) && (*(source+search_len) == *(search+search_len)))
		{
			while (*source++ == *search--)
			{
				if (*source != *search)
					break;
			}
		}
	}

	return result;
}

#if 0
int main()
{
	char *source_str = "AnkanaTrinaGingi";
	char *search_str = "TrinaGingi";

	printf("%d \n", strindex(source_str, search_str));

	return 0;
}
#endif