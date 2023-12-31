#include "main.h"

/**
 * str_concat - Concat two string.
 * @s1: Firt string to concat.
 * @s2: Second string to concat.
 *
 * Return: Sucess pointer, else NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, maxLen;
	int i = 0;
	int o = 0;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	maxLen = len1 + len2 + 1;

	ptr = malloc(sizeof(char) * maxLen);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (o < len2)
	{
		ptr[i] = s2[o];
		i++;
		o++;
	}
	ptr[i] = '\0';
	return (ptr);
}
