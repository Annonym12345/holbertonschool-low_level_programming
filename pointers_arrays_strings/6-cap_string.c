#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @s: The string to be capitalized
*
* Return: A pointer to the changed string
*/
char *cap_string(char *s)
{
	int i;
	int capitalize_next = 1;

	if (s == 0)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && capitalize_next)
		{
			s[i] = s[i] - 32;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
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
