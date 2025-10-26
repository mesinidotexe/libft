#include "libft.h"

/*char *ft_strtrim(char const *s1, char const *set)
{
    char *temp;
    char *final;
    int i;
    int j;

    j = 0;
    i = 0;

    // se nao tiver set retorn o cast da s1
    if (set[i] == '\0')
    {
        return (temp = (char *)s1);
    }

    // alocando memoria
    temp = malloc(sizeof(char) * ft_strlen(s1));
    if (!temp)
    {
        return (NULL);
    }

    // limpando o comeco da string
    while (s1[i])
    {
        while (s1[i] == set[i])
        {    
            i++;
        }
        temp[j] = s1[i];
        i++;
        j++;
    }
    temp[j] = '\0';
    i = ft_strlen(set);
    // decrementar temp passando sem a ocorrencia final pra trimmed_final
    while (j > 0)
    {
        while (temp[j] == set[i])
            i--;
        final[j] = temp[j];
        j--;
    }
    final[ft_strlen(final)] = '\0';
    return (final);
}*/




char *ft_strtrim(char const *s1, char const *set)
{
    char *temp;
    char *trimmed;
    int lens;
    int i;
    int lenset;

    lens = ft_strlen(s1);
    lenset = ft_strlen(set);

    // se nao tiver set, return o cast da s1
    if (set[0] == '\0')
    {
        return (temp = (char *)s1);
    }

    // alocando memoria
    temp = malloc(sizeof(char) * ft_strlen(s1));
    if (!temp)
    {
        return (NULL);
    }

    //limpando o fim da string
    while (lens >= 0)
    {
        while (s1[lens] == set[lenset])
        {
            lens--;
            lenset--;
        }
        temp[lens] = s1[lens];
        lens--;
    }
    lens = 0;

    // limpando o comeco da string
    while (temp[lens])
    {
        while (temp[lens] == set[lens])
        {    
            lens++;
        }
        trimmed[i] = temp[lens];
        lens++;
        i++;
    }
    trimmed[i] = '\0';
    return (trimmed);
}



 int	main(void)
{
	const char *str1 = "like lalalalala eu ee like ";
	const char *str2 = "like ";
	printf("%s \n", ft_strtrim(str1, str2));
	return (0);
}