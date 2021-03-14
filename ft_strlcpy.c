#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t len;
    int i;

    len = 0;
    i = 0;
    if (!(dest || src))
        return (0);
    while (src[len])
        len++;
    if (size > 0)
    {
        while (src[i] && size - 1 > 0)
        {
            dest[i] = src[i];
            i++;
            size--;
        }
        dest[i] = '\0';
    }
    return (len);
}
