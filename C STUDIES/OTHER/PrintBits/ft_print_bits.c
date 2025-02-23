#include <unistd.h>

void	ft_print_bits(unsigned char octet)
{
	int	div = 128;
	int	num = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write (1, "1", 1);
			num = num % div;
		}
		else
		{
			write (1, "0", 1);
		}
		div = div / 2;
	}
}

int	main(void)
{

		write(1, "1:	", 4);
		ft_print_bits(1);
		write (1, "\n", 1);
		
		write(1, "2:	", 4);
		ft_print_bits(2);
		write (1, "\n", 1);
		
		write(1, "3:	", 4);
		ft_print_bits(3);
		write (1, "\n", 1);
		
		write(1, "4:	", 4);
		ft_print_bits(4);
		write (1, "\n", 1);
		
		write(1, "5:	", 4);
		ft_print_bits(5);
		write (1, "\n", 1);
		
		write(1, "6:	", 4);
		ft_print_bits(6);
		write (1, "\n", 1);
		
		write(1, "7:	", 4);
		ft_print_bits(7);
		write (1, "\n", 1);
		
		write(1, "8:	", 4);
		ft_print_bits(8);
		write (1, "\n", 1);
		
		write(1, "9:	", 4);
		ft_print_bits(9);
		write (1, "\n", 1);
		
		write(1, "10:		", 4);
		ft_print_bits(10);
		write (1, "\n", 1);
		
		write(1, "11:		", 4);
		ft_print_bits(11);
		write (1, "\n", 1);
		
		write(1, "12:		", 4);
		ft_print_bits(12);
		write (1, "\n", 1);
		
		write(1, "13:		", 4);
		ft_print_bits(13);
		write (1, "\n", 1);
		
		write(1, "14:		", 4);
		ft_print_bits(14);
		write (1, "\n", 1);
		
		write(1, "15:		", 4);
		ft_print_bits(15);
		write (1, "\n", 1);
return (0);
}