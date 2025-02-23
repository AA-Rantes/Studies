//MIMICANDO O FUNCIONAMENTO DE STRCMP		FUNCIONANDO	[X]

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}
return (*s1 - *s2);
}

int	main(int arc, char **arv)
{
	if (arc == 3)
	{
		printf("%d", ft_strcmp(arv[1], arv[2]));
		printf("\n");
		printf("%d", strcmp(arv[1], arv[2]));
		printf("\n");
	}

return (0);
}