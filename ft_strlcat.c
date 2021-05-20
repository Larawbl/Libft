#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len;
    size_t i;
    size_t j;
    size_t lenb;

    len = 0;
    i = 0;
    lenb = 0;
    while (src[len])
        len++;
    while (dest[lenb])
        lenb++;
    j = lenb;
    if (size == 0)
        return (len);
    // if (size > 0)
    // {
    while (src[i] && (size - 1) > lenb)
    {
        dest[j] = src[i];
        i++;
        j++;
        size--;
    }
    if (lenb > size)
        return (len + size);
    dest[j] = '\0';
    // }
    return (len + lenb);
}