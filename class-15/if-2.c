/*
    Grade Calculation
    80+ -> A+
    70 > A- < 80
*/

# include <stdio.h>
int main() {
    int mark;
    scanf("%d", &mark);

    if(mark >= 80 && mark <= 100)
        printf("A+");
    else if(mark >= 70 && mark < 80)
        printf("A");
    else if(mark >= 60 && mark < 70)
        printf("A-");
    else if(mark >= 50 && mark < 60)
        printf("B");
    else if(mark >= 40 && mark < 50)
        printf("C");
    else if(mark >= 33 && mark < 40)
        printf("D");
    else
        printf("F");

    return 0;
}