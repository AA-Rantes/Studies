//usar malloc

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i = 0;

	while (src[i])
	{
		i++;
	}

	dest = malloc(i + 1);

	i = 0;

	if (dest == NULL)
		return (0); 

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(int arc, char **arv)
{
	if (arc == 2)
	{
		printf("%s\n", ft_strdup(arv[1]));
	}

return (0);
}