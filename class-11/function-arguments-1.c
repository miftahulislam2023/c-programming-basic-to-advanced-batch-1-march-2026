#include <stdio.h>

void add(int x, int y);

int main()
{
    add(12, 65);
    add(20, 26);
    add(300, 13);
    return 0;
}

void add(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
}