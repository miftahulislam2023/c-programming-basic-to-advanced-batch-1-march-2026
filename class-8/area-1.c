#include <stdio.h>

int main(void)
{
    int length, width;
    
    printf("Enter length: ");
    scanf("%d", &length);
    
    printf("Enter width: ");
    scanf("%d", &width);
    
    printf("Area is %d\n", length * width);
    
    return 0;
}
