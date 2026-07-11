void ft_ultimate_div_mod(int *a, int *b)
{
    int temp_a = *a;
    int temp_b = *b;

    *a = temp_a / temp_b;
    *b = temp_a % temp_b;
}

// #include <stdio.h>
// int main(void)
// {
//     int a = 17;
//     int b = 5;

//     printf("initial a = %d, b = %d\n", a, b);

//     ft_ultimate_div_mod(&a, &b);

//     printf("after -> a (div) = %d (expected 3)\n", a);
//     printf("after -> b (mod) = %d (expected 2)\n", b);

//     return (0);
// }