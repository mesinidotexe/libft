#include "libft.h"

void *ft_memmove(void *destination, const void *source, size_t num)
{
    unsigned char   *dest;
    unsigned char   *src;
    unsigned char   buff[num];
    size_t          i;

    i = 0;
    dest = (unsigned char *)destination;
    src = (unsigned char *)source;
    while (i < num)
    {
        buff[i] = src[i];
        i++;
    }
    i = 0;
    while (i < num)
    {
        dest[i] = buff[i];
        i++;
    }
    return (destination);
}

int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}