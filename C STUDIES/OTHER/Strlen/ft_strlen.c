#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }

return (i);
}

int main(int arc, char **arv)
{
    if (arc == 2)
    {
        printf("TAMANHO DA STRING É: %d", ft_strlen(arv[1]));
        printf("\n");
    }
return (0);
}