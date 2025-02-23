//pega uma string de números e transforma em números como se fossem dígitos
//atoi() não detecta erros
//retorna o valor convertido ou 0 se algo der errado
//é necessário que pulem espaços e seja pego apenas o primeiro sinal: "-123" retorna -123 ||"--123" retorna 0

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign = 1;
	int i = 0;
	int	result = 0;
	int	found = 1;

	//VERIFY SPACES
    while (*str == '\t' || *str == '\n' || *str == '\a' || *str == ' ' || *str == '\b' || *str == '\v' || *str == '\f' || *str == '\r' )
    {
        str++;
    }

	//VERIFY SIGN
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}

	//THE ATOI PART
	while (str[i] != '\0' && found)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
		}
		else
		{
			found = 0;
		}

		i++;
	}
	return (sign * result);
}

int	main(int arc, char **arv)
{
	if (arc == 2)
	{
		printf("MEU ATOI: %d", ft_atoi(arv[1]));
		printf("\n");
		printf("ATOI ORIGINAL:	%d", atoi(arv[1]));
		printf("\n");
	}

	return(0);
}