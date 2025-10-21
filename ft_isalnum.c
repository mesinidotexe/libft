#include <stdio.h>

int ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int main()
{
    // Teste com letras minúsculas
    printf("'a' é alfanumérico? %d\n", ft_isalnum('a')); // Esperado: 1
    printf("'z' é alfanumérico? %d\n", ft_isalnum('z')); // Esperado: 1
    
    // Teste com letras maiúsculas
    printf("'A' é alfanumérico? %d\n", ft_isalnum('A')); // Esperado: 1
    printf("'Z' é alfanumérico? %d\n", ft_isalnum('Z')); // Esperado: 1
    
    // Teste com números
    printf("'0' é alfanumérico? %d\n", ft_isalnum('0')); // Esperado: 1
    printf("'9' é alfanumérico? %d\n", ft_isalnum('9')); // Esperado: 1
    
    // Teste com caracteres não alfanuméricos
    printf("' ' é alfanumérico? %d\n", ft_isalnum(' ')); // Esperado: 0
    printf("'!' é alfanumérico? %d\n", ft_isalnum('!')); // Esperado: 0

    return 0;
}
