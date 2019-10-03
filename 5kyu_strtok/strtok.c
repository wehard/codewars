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
	static char *next_start;
	int i;

	if (src)
		next_start = NULL;
	if (next_start)
		src = next_start;
	if (!src && !next_start)
		return NULL;
	i = 0;
	while (!is_delim(src[i], delims) && src[i] != '\0')
		i++;
	if (src[i + 1] != '\0')
	{
		src[i] = '\0';
		next_start = src + i + 1;
		return (src);
	}
	else
	{
		next_start = NULL;
		return (NULL);
	}
}

int main(void)
{
	char buffer[] = "I did it MY way!";
	const char *DELIMITERS = " ";
	char *token = my_strtok(buffer, DELIMITERS);
	while (token)
	{
		(void)printf("%s|", token);
		token = my_strtok(NULL, DELIMITERS);
	}

	char buffer2[] = "Hello World This is It";
	token = my_strtok(buffer2, DELIMITERS);
	while (token)
	{
		(void)printf("%s|", token);
		token = my_strtok(NULL, DELIMITERS);
	}
	return (0);
}