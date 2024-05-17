# Table

---

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
