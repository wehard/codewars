#include <stdio.h>
#include <stddef.h>  // NULL
#include <stdbool.h> // BOOL

bool is_delim(char c, const char *delims)
{
	int i;

	i = 0;
	while (delims[i] != '\0')
	{
		if (delims[i] == c)
			return (true);
		i++;
	}
	return (false);
}

char *my_strtok(char *src, const char *delims)
{
	static char *ptr;
	char *token = NULL;

	if (src)
	{
		while (is_delim(*src, delims))
			src++;
		ptr = src;
	}

	if (!ptr)
		return (NULL);
	
	token = ptr;

	while (*ptr != '\0')
	{
		if (is_delim(*ptr, delims))
		{
			*ptr++ = '\0';
			while (is_delim(*ptr, delims))
				ptr++;
			break;
		}
		ptr++;
	}

	while (is_delim(*ptr, delims))
		ptr++;

	if (*(ptr) == '\0')
	{
		ptr = NULL;
	}
	return (token);
}

int main(void)
{
	/*
	char buffer[] = "I did it MY way!";
	const char *DELIMITERS = " ";
	char *token = my_strtok(buffer, DELIMITERS);
	while (token)
	{
		(void)printf("%s|", token);
		token = my_strtok(NULL, DELIMITERS);
	}
	*/
	const char *DELIMITERS = " ";
	char buffer2[] = "  token1  token2   token3    ";
	char *token = my_strtok(buffer2, DELIMITERS);
	while (token)
	{
		(void)printf("[%s]", token);
		token = my_strtok(NULL, DELIMITERS);
	}
	return (0);
}