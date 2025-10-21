#include <stdio.h>

int ft_atoi(const char *str)
{
	int nbr;
	int neg;

	nbr = 0;
	neg = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	if (neg % 2 != 0)
		nbr = -nbr;
	return (nbr);
}

int main()
{
    // Testes para os casos mencionados
    const char *test_cases[] = {
        "123",        // Teste número positivo simples
        "-123",       // Teste número negativo simples
        "   123",     // Teste com espaços antes
        "  -123",     // Teste com espaço e sinal negativo
        "  +123",     // Teste com espaço e sinal positivo
        "   -+123",   // Teste com múltiplos sinais
        "",           // Teste string vazia
        "123abc",     // Teste com caracteres não numéricos no final
        "abc123",     // Teste com caracteres não numéricos no início
        "00000123"    // Teste com números com zeros à esquerda
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        printf("Entrada: '%s' => ft_atoi: %d\n", test_cases[i], ft_atoi(test_cases[i]));
    }

    return 0;
}
