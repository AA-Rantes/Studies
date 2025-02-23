#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_isUpper(int c)
{
    return (c >= 'A' && c <= 'Z');          
}

int ft_toLower(int c)
{
    if (ft_isUpper(c))
        return (c + 32);
    return (c);
}

//AGORA JUNTANDO AS TRÊS
int main(int arc, char **arv)
{
	int	i = 0;

    if (arc < 2)
    {
        ft_putchar('\n');
        return (0);
    }

    while (arv[1][i])
    {
        if (ft_isUpper(arv[1][i]) && i != '\0')
        {
			ft_putchar('_');
		}
		ft_putchar(ft_toLower(arv[1][i]));
		i++;
    }
	ft_putchar('\n');

return (0);
}