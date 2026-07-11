void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b; 
}

// #include <stdio.h>
// int main(void)
// {
// 	int div;
// 	int mod;
 
// 	ft_div_mod(4, 2, &div, &mod);
// 	printf("17 / 5 -> div = %d (expected 2)\n", div);
// 	printf("17 %% 5 -> mod = %d (expected 0)\n", mod);

//     return (0);
// }