#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to located
 * Return: if the substring is located - a pointer to the beginning
 * of the located substring
 * if the substring is not lacated - null
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystrack[index] == needle[index]);
		}
		haystrack++;
	}
	return ('\0');
}
