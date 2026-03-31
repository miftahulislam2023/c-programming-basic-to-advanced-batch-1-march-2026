# Class - 10

## Function
- Prototype
  - ফাংশনের নাম
  - রিটার্ন টাইপ
  - প্যারামিটার লিস্ট
- Definition
  - ফাংশনের নাম
  - রিটার্ন টাইপ
  - প্যারামিটার লিস্ট
  - ফাংশনের বডি -> এখানে কোড লেখা থাকবে

## Different Types of Naming a Variable

### 1. Pascal Case (UpperCamelCase)
In this style, the first letter of every word is capitalized, including the very first word. There are no separators like underscores.
* **Commonly used in:** Class names in most languages (Java, Python, C#) and React components.
* **Example:** `UserAccountProfile`, `InvoiceTotalAmount`, `MainDashboard`.

### 2. Snake Case
All letters are written in lowercase, and words are separated by an underscore (`_`).
* **Commonly used in:** Python (variables and functions), Ruby, and database field names.
* **Example:** `user_account_profile`, `invoice_total_amount`, `main_dashboard`.

### 3. Camel Case (lowerCamelCase)
Similar to Pascal Case, but the very first letter of the first word is lowercase. Every subsequent word starts with a capital letter.
* **Commonly used in:** JavaScript, Java, and C# (for local variables and method names).
* **Example:** `userAccountProfile`, `invoiceTotalAmount`, `mainDashboard`.

### 4. Kebab Case (Salami Case)
All letters are lowercase, and words are separated by a hyphen (`-`). 
* **Note:** This is usually not allowed for variable names in most programming languages (because the hyphen is interpreted as a minus sign), but it is the standard for URLs and CSS class names.
* **Example:** `user-account-profile`, `invoice-total-amount`, `main-dashboard`.

### 5. Screaming Snake Case (Macro Case)
All letters are uppercase, and words are separated by underscores.
* **Commonly used in:** Constants that do not change throughout the program.
* **Example:** `MAX_RETRY_ATTEMPTS`, `API_KEY_SECRET`, `BASE_URL`.

| Convention | Format | Usage Context |
| | | |
| **Pascal Case** | `MyVariable` | Classes / Components |
| **Snake Case** | `my_variable` | Python / Databases |
| **Camel Case** | `myVariable` | JS / Java Variables |
| **Kebab Case** | `my-variable` | CSS / URLs |
| **Screaming Snake**| `MY_VARIABLE` | Constants |

## Function Prototype
- একটি function prototype কোনো function-কে ব্যবহার করার আগে এবং সেটি define করার পূর্বেই declare করে রাখে। একটি prototype তৈরি হয় function-এর নাম, এর return type এবং এর parameter list দিয়ে। এটি একটি semicolon দিয়ে শেষ হয়। Compiler-এর এই information-টি জানা প্রয়োজন যাতে এটি ঐ function-এর call-টিকে সঠিকভাবে execute করতে পারে।

## কিছু গুরুত্বপূর্ণ বিষয়
- যখন return statement-এর সম্মুখীন হওয়া যায়, function-টি সাথে সাথে return করে। এর পরের কোনো statement আর execute হয় না। সুতরাং, একটি return statement কোনো function-এর closing curly brace-এ পৌঁছানোর আগেই তাকে return করতে বাধ্য করে।
- একটি return statement-কে কোনো return value ছাড়াই একা একা ব্যবহার করা যেতে পারে। return-এর এই রূপটি দেখতে এরকম: `return`;


## Homework
1. এমন একটি program লিখুন যাতে অন্তত দুটি function থাকে এবং এটি The best programmers are hard workers. message-টি প্রিন্ট করে।
2. এমন একটি program লিখুন যা convert() নামের একটি function ব্যবহার করে। এটি user-কে ডলারে একটি পরিমাণ (amount) ইনপুট দিতে prompt করবে এবং value-টিকে পাউন্ডে (pounds) কনভার্ট করে return করবে। (পাউন্ড প্রতি ২.০০ ডলার বিনিময় হার বা exchange rate ব্যবহার করুন।) Conversion-টি display করুন।
3. এই program-টিতে কী ভুল আছে?
```c
#include <stdio.h>

int f1(void);

int main(void)
{
    double answer;
    answer = f1();
    printf("%f", answer);
    
    return 0;
}

int f1(void)
{
    return 100;
}
```
4. এই function-টিতে কী ভুল আছে?
```c
void func(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    return i; 
}
```