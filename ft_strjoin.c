#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *newstr;

    i = 0;
    j = 0;
    newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s1) + 1));
    if (!newstr)
        return (NULL);
    while (s1[i] != 0)
    {
        newstr[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        newstr[i] = s2[j];
        i++;
        j++;
    }
    newstr[i + 1] = '\0';
    return (newstr);
}

/*int main()
{
    char const *s1 = "Abcd";
    char const *s2 = "Efgh";
    int i = 0;
    printf("%s\n", ft_strjoin(s1, s2));
    char *str = ft_strjoin(s1, s2);
    while (str[i])
    {
        i++;
    }
    printf ("%d\n", i);
    return 0;
}*/
