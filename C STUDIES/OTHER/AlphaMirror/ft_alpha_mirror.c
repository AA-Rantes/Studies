/*
- SE ESTIVER NO RANGE DAS LETRAS (65 -> 90 && 97 -> 122)
- str[i] = 'Z' - str[i] + 'A' ou str[i] = 'z' - str[i] + 'a'
*/

#include	<unistd.h>

void	ft_alpha_mirror(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = 90 - str[i] + 65;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = 97 - str[i] + 122;
			write(1, &str[i], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}

		i++;
	}
}

int	main(int arc, char **arv)
{
	if (arc == 2)
	{
		ft_alpha_mirror(arv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}

return (0);
}