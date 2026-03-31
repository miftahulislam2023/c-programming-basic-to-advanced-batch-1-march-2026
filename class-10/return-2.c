#include <stdio.h>

int func(void); /* prototype */

int main(void)
{
    int num;
    num = func(); 
    printf("%d\n", num);
    return 0;
    printf("%d", func());
}

int func(void)
{
    return 100000;
}
