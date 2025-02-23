#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

return (dest);
}

int main(int arc, char **arv)
{
    if (arc == 3)
    {
        printf("FT_STRCPY: 	%s", ft_strcpy(arv[1], arv[2]));
        printf("\n");
        printf("STRCPY:		%s", strcpy(arv[1], arv[2]));
        printf("\n");
    }

return (0);
}