//trocar de "a" pra "b", de "c" pra "d" e assim por diante até chegar em "z", que irá trocar para "a"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
		{
			ft_putchar(str[i] + 1);
		}

		else if (str[i] == 'Z' || str[i] == 'z')
		{
			ft_putchar(str[i] - 25);
		}

		else
		{
			ft_putchar(str[i]);
		}

		i++;
	}
}

int	main(int arc, char **arv)
{
	if (arc == 2)
	{
		ft_rotone(arv[1]);
		ft_putchar('\n');
	}

return (0);
}