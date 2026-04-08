# Class - 11

## আপনি Homework না করলে শিখতে পারবেন না!

## HW
1. Parameters vs Arguments in C
2. এমন একটি program লিখুন যা outnum() নামের একটি function ব্যবহার করে। এটি একটি integer argument নেবে এবং সেটিকে screen-এ display করবে।
3. এই program-টিতে কী ভুল আছে?
```c
#include <stdio.h>

void sqr_it(int num);

int main(void)
{
    sqr_it(10.0);
    return 0;
}

void sqr_it(int num)
{
    printf("%d", num * num);
}
```

```
মাস্টারি স্কিলস চেক (Mastery Skills Check)
১. চাঁদের gravity (মহাকর্ষ) পৃথিবীর প্রায় ১৭ শতাংশ। এমন একটি program লিখুন যা আপনাকে আপনার weight (ওজন) এন্টার করতে দেয় এবং চাঁদে আপনার effective weight ক্যালকুলেট করে।
২. এই program fragment-টিতে কী ভুল আছে?
this inputs a number scanf("%d", &num);
৩. এক কাপে ৮ ounces (আউন্স) থাকে। এমন একটি program লিখুন যা ounces-কে cups-এ convert করে। এই conversion পারফর্ম করার জন্য o_to_c() নামের একটি function ব্যবহার করুন। Ounces-এর সংখ্যা দিয়ে এটিকে call করুন এবং এটি যেন cups-এর সংখ্যা return করে।
৪. C-তে পাঁচটি basic data types কী কী?
৫. এই variable-এর নামগুলোর প্রতিটিতে কী ভুল আছে?
a) short-fall
b) $balance
c) last + name
d) 9times
```