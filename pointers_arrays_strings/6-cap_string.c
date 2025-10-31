#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	const char *seps = " \t\n,;.!?\"(){}";
	size_t i;

	if (s == NULL)
		return (NULL);

	if (s[0] != '\0' && islower((unsigned char)s[0]))
		s[0] = (char)toupper((unsigned char)s[0]);

	for (i = 1; s[i] != '\0'; i++)
	{
		if (isupper((unsigned char)s[i]))
			s[i] = (char)tolower((unsigned char)s[i]);

		if (strchr(seps, s[i - 1]) && isalpha((unsigned char)s[i]))
			s[i] = (char)toupper((unsigned char)s[i]);
	}
	return (s);
}
