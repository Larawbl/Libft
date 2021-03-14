#include "libft.h"

size_t ft_strlcat(char *dest , const char *src , size_t size);
{
    size_t len;
    int i;
    int j;

    len = 0;
    i = 0;
    j = 0;
    if (!(dest || src))
        return (0);
    while (src[len])
        len++;
    if (size > 0)
    {
        while (dest[j])
            j++;
        while (src[i] && size - 1 > 0)
        {
            dest[j] = src[i];
            i++;
            j++;
            size--;
        }
        dest[i] = '\0';
    }
    return (len);
}