#include "main.h"
#include <ctype.h>
#include <stddef.h>

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/
char *cap_string(char *s)
{
	int i;
	int capitalize_next = 1;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (capitalize_next && islower(s[i]))
		{
			s[i] = (char)toupper(s[i]);
			capitalize_next = 0;
		}
		else if (isupper(s[i]) && !capitalize_next)
		{
			capitalize_next = 0;
		}
		else if (!isalpha(s[i]))
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
	}
	return (s);
}
