#include <unistd.h>

void ft_swap(int *a, int *b)   // a -> variable holding 5 or X , b -> variable holding 10 or Y
{
	int tmp;

	tmp = *a;   // tmp = 5 (copy the value a points to)
	*a = *b;    // the variable a points to now holds 10 (copied FROM *b)
	*b = tmp;   // the variable b points to now holds 5 (copied FROM tmp)
}

// #include <stdio.h>
// int main(void)
// {
// 	int x = 5;
// 	int y = 10;

// 	printf("Before: x=%d y=%d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After:  x=%d y=%d\n", x, y);
// 	return 0;
// }