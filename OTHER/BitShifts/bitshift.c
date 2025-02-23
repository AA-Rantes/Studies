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

/*    printf("\n\n");
    printf("Right bit shift for 1: %d \n", a >> 1);
    printf("Right bit shift for 2: %d \n", a >> 2);
    printf("Right bit shift for 3: %d \n", a >> 3);
    printf("Right bit shift for 4: %d \n", a >> 4);
    printf("Right bit shift for 5: %d \n", a >> 5);
    printf("Right bit shift for 6: %d \n", a >> 6);
    printf("Right bit shift for 7: %d \n", a >> 7);
    printf("Right bit shift for 8: %d \n", a >> 8);
    printf("\n\n");*/

/*    printf("\n\n");
    printf("Left bit shift for 1: %d \n", a << 1);
    printf("Left bit shift for 2: %d \n", a << 2);
    printf("Left bit shift for 3: %d \n", a << 3);
    printf("Left bit shift for 4: %d \n", a << 4);
    printf("Left bit shift for 5: %d \n", a << 5);
    printf("Left bit shift for 6: %d \n", a << 6);
    printf("Left bit shift for 7: %d \n", a << 7);
    printf("Left bit shift for 8: %d \n", a << 8);
    printf("\n\n");*/