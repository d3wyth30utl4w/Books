# Table



### Examples of Illegal Identifiers
| Illegal Identifier  | Description                                           |
|---------------------|-------------------------------------------------------|
| `employee` `Salary` | There can be no space between `employee` and `Salary` |
| `Hello!`            | The exclamation mark cannot be used in an identifier. |
| `one + two`         | The symbol + cannot be used in an identifier.         |
| `2nd`               | An identifier cannot begin with a digit.              |



### Values and Memory Allocation for Three Simple Data Types
| Data Type | Values                    | Storage (in bytes) |
|----------|---------------------------|--------------------|
| `int`    | -2147483648 to 2147483647 | 4                  |
| `bool`   | `true` and `false`        | 1                  |
| `char`    | -128 to         127       | 1                  |

> [!NOTE]
> This is only a general guide. Different compilers allow different amounts.
> If you want to find your exact amount run [memory_size_on_system.cpp](../Programs/memory_size_on_system.cpp)

### Examples of Real Numbers Printed in C++ FLoating-Point Notation
| Real Number | C++ Floating-Point Notation |
|-------------|-----------------------------|
| 75.924      | 7.592400E1                  |
| 0.18        | 1.800000E-1                 |
| 0.0000453   | 4.530000E-5                 |
| -1.482      | -1.482000E0                 |
| 7800.0      | 7.800000E3                  |


### Walk-Through Example

```c++
#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    
    num1 = 18;
    num1 = num1 + 27;
    num2 = num1;
    num3 = num2 / 5;
    num3 = num3 / 4;
    return 0;
}
```

|                    | num1  | num2   | num3  | Explanation                                                                                            |
|--------------------|-------|--------|-------|--------------------------------------------------------------------------------------------------------|
| Before Statement 1 | ?     | ?      | ?     |                                                                                                        |
| After Statement 1  | 18    | ?      | ?     |                                                                                                        |
| After Statement 2  | **45** | ?      | ?     | `num1 + 27 = 18 + 27 = 45`. The value is assigned to num1, which replaces <br/> the old value of num1. |
| After Statement 3  | **45** | 45     | ?     | Copy the value of `num1` into `num2`.                                                                  |
| After Statement 4  | 45    | **45** | 9     | `num2 / 5 = 45 / 5 / = 9`. This value is assigned to `num3`. So `num3 = 9`.                            |
| After Statement 5  | 45    | 45     | **2** | `num3 / 4 = 9 / 4 = 2`. This value is assigned to `num3`, which replaces<br/> the old value of `num3`. ||
    