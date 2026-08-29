# Lab Session 02: Control Structures and Function Fundamentals in C++

## 📌 Lab Overview

This lab focuses on **control structures and function fundamentals in C++**. The objective is to understand how programs make decisions, how functions are created and used, and how data is passed between functions.

---

## 🎯 Objectives

By the end of this lab, students will be able to:

* Implement selection-based control structures such as:

  * `if`
  * `if-else`
  * Nested `if`
  * `switch`
* Differentiate between **predefined (library) functions** and **user-defined functions**.
* Design and implement:

  * **Value-returning functions**
  * **Void functions**
* Apply:

  * **Value parameters**
  * **Reference parameters**
* Understand the **scope of an identifier** within a C++ program.
* Differentiate between **static variables** and **automatic variables** and understand their storage duration.

---

## 📚 Topics Covered

### 1. Selection Control Structures

Selection structures allow a program to make decisions based on conditions.

#### `if` Statement

Used when a block of code should execute only when a condition is true.

```cpp
if (condition)
{
    // statements
}
```

#### `if-else` Statement

Used when there are two possible outcomes.

```cpp
if (condition)
{
    // true
}
else
{
    // false
}
```

#### Nested `if`

An `if` statement placed inside another `if` statement.

```cpp
if (condition1)
{
    if (condition2)
    {
        // statements
    }
}
```

#### `switch` Statement

Used when a variable needs to be compared with multiple fixed values.

```cpp
switch (choice)
{
    case 1:
        // statements
        break;

    case 2:
        // statements
        break;

    default:
        // statements
}
```

---

## 2. Functions in C++

A function is a reusable block of code designed to perform a specific task.

### Predefined Functions

These are functions already provided by C++ libraries.

Examples:

```cpp
sqrt(25);
pow(2, 3);
strlen("Hello");
```

### User-Defined Functions

These are functions created by the programmer.

Example:

```cpp
int add(int a, int b)
{
    return a + b;
}
```

---

## 3. Value-Returning Functions

A value-returning function sends a value back to the calling function using the `return` statement.

Example:

```cpp
int square(int n)
{
    return n * n;
}
```

Calling the function:

```cpp
int result = square(5);
```

---

## 4. Void Functions

A `void` function performs a task but does not return a value.

Example:

```cpp
void display()
{
    cout << "Hello World";
}
```

Calling the function:

```cpp
display();
```

---

## 5. Value Parameters

A value parameter receives a **copy** of the original value.

Changes made inside the function do not affect the original variable.

Example:

```cpp
void change(int x)
{
    x = 100;
}
```

---

## 6. Reference Parameters

A reference parameter refers directly to the original variable.

Changes made inside the function affect the original variable.

Example:

```cpp
void change(int &x)
{
    x = 100;
}
```

---

## 7. Scope of an Identifier

The **scope** of an identifier determines where that identifier can be accessed in a program.

### Local Variable

Declared inside a function or block and can only be accessed within that scope.

```cpp
void test()
{
    int x = 10;
}
```

### Global Variable

Declared outside all functions and can generally be accessed throughout the program.

```cpp
int x = 10;

int main()
{
    cout << x;
}
```

---

## 8. Static and Automatic Variables

### Automatic Variable

A normal local variable is automatic by default. It is created when the function/block is entered and destroyed when it is exited.

```cpp
void test()
{
    int x = 0;
    x++;
    cout << x;
}
```

### Static Variable

A static local variable retains its value between function calls.

```cpp
void test()
{
    static int x = 0;
    x++;
    cout << x;
}
```

If `test()` is called multiple times, `x` will continue from its previous value.

---

## 🧪 Lab Exercises

The lab exercises cover the implementation of:

1. `if` statements
2. `if-else` statements
3. Nested `if` statements
4. `switch` statements
5. Predefined/library functions
6. User-defined functions
7. Value-returning functions
8. Void functions
9. Value parameters
10. Reference parameters
11. Local and global scope
12. Static and automatic variables

---

## 💻 Basic C++ Program Structure

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Program statements

    return 0;
}
```

---

## 📝 Key Takeaways

* **`if`** is used for conditional decision making.
* **`if-else`** provides two possible paths.
* **Nested `if`** allows multiple levels of conditions.
* **`switch`** is useful for selecting between multiple fixed choices.
* **Library functions** are already provided by C++.
* **User-defined functions** are created by the programmer.
* **Value-returning functions** return a result.
* **Void functions** perform a task without returning a value.
* **Value parameters** pass a copy of data.
* **Reference parameters** allow a function to modify the original data.
* **Scope** determines where an identifier can be accessed.
* **Automatic variables** have a temporary lifetime.
* **Static variables** retain their value between function calls.

---

## 🏁 Conclusion

This lab provides the foundation for writing **structured and modular C++ programs**. By using control structures and functions, complex problems can be divided into smaller, manageable tasks, making programs easier to understand, test, and maintain.
