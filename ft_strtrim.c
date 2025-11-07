/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:39:02 by vmesini-          #+#    #+#             */
/*   Updated: 2025/10/27 19:39:07 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	trimmed = malloc(sizeof(char) * end);
	if (!trimmed)
		return (NULL);
	while (start <= end)
	{
		trimmed[i++] = s1[start++];
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* int	main(void)
{
	const char *str1 = "abcabcabcabcab a cabcabcabcabc";
	const char *str2 = "abc";
	char *trimmed = ft_strtrim(str1, str2);
	printf("%s \n", trimmed);
	free (trimmed);
	return (0);
} */

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

/* char *ft_strtrim(char const *s1, char const *set)
{
	char *temp;
	char *trimmed;
	int lens;
	int i;
	int lenset;

	lens = ft_strlen(s1) - 1;
	lenset = ft_strlen(set) - 1;

	// se nao tiver set, return o cast da s1
	if (set[0] == '\0')
	{
		return (temp = (char *)s1);
	}

	// alocando memoria
	temp = malloc(sizeof(char) * ft_strlen(s1));
	trimmed = malloc(sizeof(char) * ft_strlen(s1));
	if (!temp && !trimmed)
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
	i = 0;
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
}*/
