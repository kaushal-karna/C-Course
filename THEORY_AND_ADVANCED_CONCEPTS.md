# C++ Theory - Extracted from Course Code

This document contains theoretical knowledge extracted directly from the comments and code examples in the C++ learning course.

## Table of Contents

1. [Program Structure](#program-structure)
2. [Comments](#comments)
3. [Tokens](#tokens)
4. [Variables](#variables)
5. [Data Types](#data-types)
6. [Operators](#operators)
7. [Constants](#constants)
8. [Manipulators](#manipulators)
9. [Input/Output Operations](#inputoutput-operations)
10. [Header Files](#header-files)
11. [Scope & Scope Resolution](#scope--scope-resolution)
12. [Reference Variables](#reference-variables)
13. [Type Casting](#type-casting)
14. [Control Structures](#control-structures)
15. [Loops](#loops)

---

## Program Structure

### Basic Components

**Preprocessor Directive:**

```cpp
#include <iostream>  // This is a preprocessor directive
```

- `#include` tells the compiler to include a header file
- Allows us to use input and output streams

**Using Namespace:**

```cpp
using namespace std;
```

- Allows us to use standard library functions without the `std::` prefix
- Avoids prefixing `std::` before standard functions

**Main Function:**

```cpp
int main() {
    return 0;
}
```

- Execution starts here
- Program ends successfully when `return 0;` is executed

---

## Comments

### Single-line Comments

```cpp
// This is a single line comment
```

### Multi-line Comments

```cpp
/* This is a multi-line comment
   that spans multiple lines */
```

---

## Tokens

Tokens are the basic building blocks of a C++ program. Every valid statement in C++ is made up of tokens.

**Types of Tokens:**

1. **Keywords:** Reserved words with special meaning in C++ (e.g., `int`, `float`, `return`, `main`)
2. **Identifiers:** Names given to variables, functions, etc.
3. **Operators:** Symbols that perform operations (e.g., `+`, `-`, `*`, `/`)
4. **Literals:** Fixed values in the code:
   - Integer literals: `10`, `45`
   - Floating-point literals: `3.14`, `34.4F`, `34.4L`
   - Character literals: `'A'`
   - String literals: `"kaushal"`, `"Hello, World!"`

**Example:**

```cpp
int number = 10;  // keyword + identifier + operator + literal
float pi = 3.14;  // keyword + identifier + operator + literal
char grade = 'A'; // character literal
string name = "kaushal"; // string literal
```

---

## Variables

### Variable Declaration Syntax

```cpp
Data_type Variable_name = value;
```

**Examples:**

```cpp
int a = 10;
float b = 20.01;
char c = 'u';
bool is_true = false;

// Multiple variables
int a = 4, b = 8;
```

### Variable Classification by Scope

**1. Local Variables:**

- Declared inside a function
- Only accessible within that function
- Memory allocated when entering the function scope
- Memory freed when leaving the function scope

**2. Global Variables:**

- Declared outside all functions
- Accessible throughout the program
- Memory exists for the program's lifetime

**Example:**

```cpp
int glo = 6;  // Global variable

int main(){
    int glo = 9;  // Local variable (shadows global)
    cout << glo;  // Prints local value (9)
    return 0;
}
```

---

## Data Types

### Built-in Data Types in C++

**Integer Type:**

```cpp
int a = 10;
```

**Floating-Point Type:**

```cpp
float d = 34.4F;      // Float literal with 'F' suffix
double e = 34.4;      // Default floating-point
long double e = 34.4L; // Extended precision with 'L' suffix
```

**Character Type:**

```cpp
char c = 'A';
```

**Boolean Type:**

```cpp
bool is_true = false;
```

**String Type:**

```cpp
string name = "kaushal";
```

---

## Operators

### Arithmetic Operators

```cpp
int a = 4, b = 5;

cout << "a + b = " << (a + b);   // Addition
cout << "a - b = " << (a - b);   // Subtraction
cout << "a * b = " << (a * b);   // Multiplication
cout << "a / b = " << (a / b);   // Division
cout << "a % b = " << (a % b);   // Modulus (remainder)
```

### Increment/Decrement Operators

```cpp
a++;   // Post-increment: returns value then increments
++a;   // Pre-increment: increments then returns value
a--;   // Post-decrement: returns value then decrements
--a;   // Pre-decrement: decrements then returns value
```

### Comparison Operators

```cpp
(a == b)  // Equal to
(a != b)  // Not equal to
(a > b)   // Greater than
(a < b)   // Less than
(a >= b)  // Greater than or equal to
(a <= b)  // Less than or equal to
```

### Logical Operators

```cpp
((a == b) && (a < b))  // Logical AND
((a == b) || (a < b))  // Logical OR
(!(a == b))            // Logical NOT
```

### Assignment Operators

```cpp
int x = 10;  // Assign 10 to x
```

### Input/Output Operators

```cpp
<<  // Insertion operator (output)
>>  // Extraction operator (input)
```

---

## Constants

### Concept Definition

Constants in C++ are fixed values that cannot be altered by the program during its execution. They are also called literals.

**Declaration Syntax:**

```cpp
const int a = 3;
a = 45;  // ERROR: a is a constant and cannot be changed
```

### Types of Constants

- Integer constants
- Floating-point constants
- Character constants
- String constants

---

## Manipulators

Manipulators are used to format the output in C++. They manipulate the way data is displayed.

**Common Manipulators:**

```cpp
#include <iomanip>

endl          // End line (newline)
setw(4)       // Set field width
setprecision(2)  // Set decimal precision
```

**Example:**

```cpp
int a = 3, b = 78, c = 1233;

cout << "The value of a is: " << setw(4) << a << endl;
cout << "The value of b is: " << setw(4) << b << endl;
cout << "The value of c is: " << setw(4) << c << endl;
```

---

## Input/Output Operations

### Output with cout

```cpp
#include <iostream>
using namespace std;

cout << "Enter the value of num1:\n";  // Using insertion operator <<
```

### Input with cin

```cpp
int num1;
cin >> num1;  // Using extraction operator >>
```

### Operator Usage

- **Insertion Operator `<<`:** Used for output operations with `cout`
- **Extraction Operator `>>`:** Used for input operations with `cin`

**Example:**

```cpp
int num1, num2;

cout << "Enter the value of num1:\n";
cin >> num1;

cout << "Enter the value of num2:\n";
cin >> num2;

cout << "The sum is " << (num1 + num2);
```

---

## Header Files

There are two types of header files in C++:

### 1. System Header Files

- Come with the compiler
- Enclosed in angle brackets `< >`
- Examples: `<iostream>`, `<vector>`, `<string>`, `<iomanip>`

```cpp
#include <iostream>
```

### 2. User-defined Header Files

- Created by the user
- Enclosed in double quotes `" "`
- Will produce an error if the file is not in the current directory

```cpp
#include "this.h"  // Will produce an error if this.h is not present
```

---

## Scope & Scope Resolution

### Scope Resolution Operator `::`

The scope resolution operator `::` is used to access global variables or functions when they are shadowed by local variables of the same name.

**Example:**

```cpp
int c = 45;  // Global variable

int main(){
    int c = 78;  // Local variable (shadows global c)
    cout << c;         // Prints local value: 78
    cout << ::c;       // Prints global value: 45
    return 0;
}
```

---

## Reference Variables

### Reference Variable Definition

A reference variable is an alias for an existing variable. Once a reference is initialized, it cannot be changed to refer to another variable.

**Syntax:**

```cpp
float x = 455;
float & y = x;  // y is a reference variable for x
```

### Properties

- Reference must be initialized when declared
- Cannot be reassigned to reference another variable
- Reference and original variable share the same memory location

**Example:**

```cpp
float x = 455;
float & y = x;  // y is a reference variable (alias) for x

cout << x << endl;  // Prints: 455
cout << y << endl;  // Prints: 455

y = 100;            // Changes both x and y
cout << x << endl;  // Prints: 100
cout << y << endl;  // Prints: 100
```

### Naming Analogy

In the course, reference variables are compared to: `Rohan ---> Monty ---> Rohu ---> Dangerous Coder`

Each level is an alias/reference to the previous one, all pointing to the same entity.

---

## Type Casting

### Casting Process

Type casting is the process of converting a variable from one data type to another.

### Type Casting Syntax

**C-style casting:**

```cpp
(data_type) variable
```

**C++ style casting:**

```cpp
data_type(variable)
```

### Example

```cpp
int a = 45;
float b = 45.46;

// Cast int to float
cout << "The value of a as float is: " << (float)a << endl;
cout << "The value of a as float is: " << float(a) << endl;

// Cast float to int
cout << "The value of b as int is: " << (int)b << endl;
cout << "The value of b as int is: " << int(b) << endl;

// Type casting in expressions
int c = int(b);

cout << "The expression (a + int(b)): " << (a + int(b)) << endl;
```

### Implicit Type Casting in Expressions

```cpp
int a = 45;
float b = 45.46;

cout << "a + b = " << (a + b);  // a is implicitly converted to float
```

---

## Control Structures

Control structures are essential for controlling the flow of a program. They allow developers to create complex logic.

### Three Basic Control Structure Types

#### 1. Sequence Structure

The sequence structure is the simplest control structure. It consists of a series of statements executed in the order they appear.

**Flow:**

```text
Entry --> Action1 --> Action2 --> Action3 --> Exit
```

#### 2. Selection Structure (Decision Making)

Allows the program to make decisions based on certain conditions.

**Flow:**

```text
Entry --> Condition? --> True --> Action1 --> False --> Action2 --> Exit
```

**Types of Selection Statements:**

**a) if Statement:**

```cpp
if(condition) {
    // Code executes if condition is true
}
```

**b) if-else Statement:**

```cpp
if(i < 3) {
    cout << "i is less than 3" << endl;
}
else {
    cout << "i is 3 or greater" << endl;
}
```

**c) If-else-if-else Ladder:**

```cpp
if(age < 18 && age > 0) {
    cout << "You cannot come to my party" << endl;
}
else if(age == 18) {
    cout << "You are a kid and you will get a kid pass" << endl;
}
else if(age < 1) {
    cout << "You are not yet born" << endl;
}
else {
    cout << "You can come to the party" << endl;
}
```

**d) switch Statement:**

```cpp
switch(age) {
    case 18:
        cout << "You are 18" << endl;
        break;
    
    case 22:
        cout << "You are 22" << endl;
        break;
    
    default:
        cout << "No special cases" << endl;
        break;
}
```

#### 3. Iteration Structure (Loop)

Allows the program to repeat a block of code multiple times based on a condition.

**Flow:**

```text
Entry --> Condition? --> True --> Action1 --> Condition? --> True --> Action1 --> ... --> False --> Exit
```

**Note:** Loop implementation examples are referenced in control_structures.cpp comments but not fully implemented in the current code.

---

## Loops

Loops in C++ are control structures that allow a block of code to be executed repeatedly based on a condition. There are three types of loops in C++.

### Loop Types Overview

1. **For Loop** - Used when the number of iterations is known
2. **While Loop** - Used when iterations depend on a condition
3. **Do-While Loop** - Similar to while loop but executes at least once

---

### For Loop

#### For Loop Basics

A for loop is used to execute a block of code a specific number of times. It initializes a variable, checks a condition, and increments/decrements the variable after each iteration.

#### For Loop Syntax

```cpp
for(initialization; condition; increment/decrement) {
    // code to be executed
}
```

#### For Loop Components

- **Initialization:** Declares and initializes loop variable (executed once before the loop starts)
- **Condition:** Checked before each iteration; if true, loop body executes; if false, loop exits
- **Increment/Decrement:** Executed after each iteration to modify the loop variable

#### For Loop Example

```cpp
for(int i = 0; i <= 40; i++) {
    cout << i << endl;
}
```

This code prints numbers from 0 to 40.

#### Infinite For Loop

An infinite for loop occurs when the condition is always true:

```cpp
for (int i = 1; 34 <= 40; i++) {
    // This loop runs infinitely because 34 <= 40 is always true
    cout << i << endl;
}
```

---

### While Loop

#### While Loop Basics

A while loop executes a block of code as long as a specified condition is true. The condition is checked before each iteration.

#### While Loop Syntax

```cpp
while(condition) {
    // C++ statements
}
```

#### While Loop Components

- **Condition:** Evaluated before each iteration; if true, loop body executes; if false, loop exits
- **Loop Body:** Code that executes when condition is true
- **Increment/Update:** Must be included inside the loop body to modify variables

#### While Loop Example

```cpp
int i = 1;
while(i <= 40) {
    cout << i << endl;
    i++;
}
```

This code prints numbers from 1 to 40.

#### Infinite While Loop

An infinite while loop can be created using a condition that is always true:

```cpp
int i = 1;
while(true) {
    cout << i << endl;
    i++;
}
```

---

### Do-While Loop

#### Do-While Loop Basics

A do-while loop is similar to a while loop, but the key difference is that the code block is executed at least once before checking the condition. The condition is checked after each iteration.

#### Do-While Loop Syntax

```cpp
do {
    // C++ statements
} while(condition);
```

#### Do-While Loop Components

- **Loop Body:** Code that executes at least once
- **Condition:** Evaluated after each iteration; if true, loop repeats; if false, loop exits
- **Semicolon:** Important - required at the end of the while statement

#### Do-While Loop Example

```cpp
int i = 1;
do {
    cout << i << endl;
    i++;
} while(i <= 40);
```

This code prints numbers from 1 to 40, guaranteed to print at least once.

#### Key Difference from While Loop

Even if the condition is false initially, a do-while loop will execute the body at least once:

```cpp
int i = 50;
while(i <= 40) {
    cout << i << endl;  // This never executes
    i++;
}

int j = 50;
do {
    cout << j << endl;  // This executes once
    j++;
} while(j <= 40);
```

#### Practical Application: Multiplication Table

```cpp
int i = 1, n = 6;
cout << "Multiplication table of 6" << endl;
do {
    cout << n << " * " << i << " = " << (n*i) << endl;
    i++;
} while(i <= 10);
```

This produces:

```text
Multiplication table of 6
6 * 1 = 6
6 * 2 = 12
6 * 3 = 18
... up to 6 * 10 = 60
```

---

## Summary of Concepts Covered

From the course code, the following concepts have been actively learned and practiced:

- ✅ Program structure and main function
- ✅ Comments (single-line and multi-line)
- ✅ Tokens and their classification
- ✅ Variables and declaration
- ✅ Local and global scope
- ✅ Built-in data types
- ✅ Arithmetic, comparison, and logical operators
- ✅ Input/Output operations with cin and cout
- ✅ Header files (system and user-defined)
- ✅ Reference variables
- ✅ Type casting
- ✅ Constants
- ✅ Manipulators for formatting output
- ✅ Control structures (sequence, selection)
- ✅ Scope resolution operator
- ✅ Loop structures (for, while, do-while)
- ✅ Infinite loops and loop control
- ✅ Practical loop applications

---

**Last Updated:** 2026-07-13
