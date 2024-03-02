#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

int lenghtOfLongestSubstring(char *s)
{
    char    *result;
    int     len;
    int     i;
    int     j;

    result = calloc(strlen(s) + 1, sizeof(char));
    if (!result)
        return (-1);
    i = 0;
    j = 0;
    len = 0;
    while (s[i])
    {
        j = 0;
        while (s[i] && !strchr(result, s[i]))
            result[j++] = s[i++];
        if (strlen(result) > len)
            len = strlen(result);
        bzero(result, sizeof(char *));
        i = i - j + 1;
    }
    free(result);
    return (len);
}