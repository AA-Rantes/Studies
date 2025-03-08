#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_first_word(char *str)
{
	int	i = 0;

	while ((str[i] == ' ' || str[i] == '\t') && str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			return(str);
		}
		else
		{
			ft_putchar(&str[i]);
		}
	i++;
	}
}

int	main(int arc, char **arv)
{
	
}