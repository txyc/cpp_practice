#include <stdio.h>

int main()
{
    int i, j, k, l;
    i = 10;
    j = i++;
    k = ++i;
    l = 10*i++;
    printf("j, k, l: %d, %d, %d",j,k,l);
    return 0;
}
