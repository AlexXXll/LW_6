#include <stdio.h>

int main()
{
    int x = 1;
    int * p = &x;
    int n = *(p++);
    n = (*p)++;
    printf("n = %d\n", n);
    n = ++(*p);
    printf("n = %d\n", n);
    n = *(++p);
    printf("n = %d\n", n); 
    
    return 0;
}