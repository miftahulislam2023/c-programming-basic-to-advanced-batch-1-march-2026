# include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    if(age > 0 && age < 10)
        printf("Child");
    else
        if(age >= 10 && age < 16)
            printf("Teenager");
        else
            if(age >= 16 && age <= 201500)
                printf("Adult");
            else
                printf("You have died already!");

    return 0;
}