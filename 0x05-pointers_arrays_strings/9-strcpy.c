#include "main.h"
#include <string.h>

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, const char *src)
{
    int l = 0;
    int x = 0;

    while (*(src + l) != '\0')

    for ( ; x < l ; x++)
    {
        dest[x] = src[x];
    }
    dest[l] = '\0';
    return dest;
}
