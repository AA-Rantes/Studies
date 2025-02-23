/*SO, BITSHIFTS ARE ESSENTIALLY A SMALL FRACTION OF THE BRAINFUCK LANGUAGE. :DDDD*/

#include    <stdio.h>
#include    <stdlib.h>

void    ft_print_bit_right(int a)
{
    for (int i = 0; i <= 32; i++)
    {
        printf("Left shift por %02d: %08x | %d\n", i, a << i, a << i);
    }

    printf("\n\n");
}

void    ft_print_bit_left(int a)
{
    for (int i = 0; i <= 32; i++)
    {
        printf("Right shift por %02d: %08x | %d\n", i, a >> i, a >> i);
    }

    printf("\n\n");
}

int main(void)
{
unsigned int n = 1;

        ft_print_bit_right(n);
        ft_print_bit_left(n);

return (0);
}