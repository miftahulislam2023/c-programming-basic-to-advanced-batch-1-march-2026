# Class - 6

## DECLARING VARIABLES AND ASSIGNING VALUES
- কোন value মেমরিতে রাখার সময় একেক Data Type একেক পরিমাণ জায়গা দখল করে
- Memory-তে প্রতিটা Location এর একটা করে নির্দিষ্ট Memory Address থাকে।

## Storage of Variables
- Character -> char -> 8bit
- Integer -> int -> 32bit
- Floating-point Number -> float -> 32bit
- Double-precision Floating-point Number -> double -> 64bit


```c
#include <stdio.h>

int main()
{
    int x; // variable declaration
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    return 0;
}
```
```
Size of char: 1 bytes
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
```