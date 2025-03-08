#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int arc, char **arv)
{
    int i = 0;
    
    if (arc == 2)
    {
        while (arv[1][i] != '\0')
        {
            ft_putchar(arv[1][i]);
            i++;
        }
        write(1, "\n", 1);
    }
    
return (0);
}