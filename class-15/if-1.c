# include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("Even");
        printf("The number is %d", number);
    } // wrap -> code block -> single unit

    else
        printf("Odd");

    return 0;
}