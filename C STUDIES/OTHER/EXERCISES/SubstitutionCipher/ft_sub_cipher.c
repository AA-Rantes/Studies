#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>

void	ft_sub_cipher(*str)
{
	int	i = 0;
	char	c;

	while (i < strlen(*str) && *str)
	{
		/*
			A CADEIA DE CARACTERES QUE EU PRECISO SEGUIR É:

			 / {47} === T	|	& {38} === H		|	" {34} === C
			 ! {33} === A	|	[ {91} === O		|	] {93} === P
			 ) {41} === L	|	= {61} === R		|	÷ {NULL} === E
			 : {58} === V	|	# {35} === D		|	
			 - {45} === Z	|	% {37} === G		|	
			 @ {64} === S	|	< {60} === T		|	
			 * {42} === J	|	? {63} === M		|	
			 , {44} === N	|	> {62} === Y		|	


		*/
		switch (str[i])
		{
			case 33:
			{
				str[i] = 'A';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 34:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 35:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 37:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 38:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 41:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;

			case 42:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 44:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 45:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 47:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 58:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 60:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 61:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 62:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 63:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 64:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 91:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
			
			case 93:
			{
				str[i] = 'C';
				printf(%c, &str[i]);
				i++;
			}
				break;
				
			case default:
			{
				printf("\nINVALID\n");
			}
				break;
		}

		i++;
	}
}
