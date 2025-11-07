#include <stdio.h>
#include <math.h>

int pow(int a, int b) { return pow(a, b); }

int main( void )
{
    printf("hello world\n");
    printf("%d", pow(2, 3));

    for (int i = 0; i < 5; ++i)
        printf("hello git\n");

    char *ptr = NULL;
    int ar[][2] = {{1, 2}, {4, 5}};
    ptr = ar;

    return 0;
}
