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

### Definition

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

### Output with `cout`

```cpp
#include <iostream>
using namespace std;

cout << "Enter the value of num1:\n";  // Using insertion operator <<
```

### Input with `cin`

```cpp
int num1;
cin >> num1;  // Using extraction operator >>
```

### Operators

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

### Definition

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

### Definition

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
```
Entry --> Action1 --> Action2 --> Action3 --> Exit
```

#### 2. Selection Structure (Decision Making)

Allows the program to make decisions based on certain conditions.

**Flow:**
```
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

**c) If else-if else Ladder:**
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
```
Entry --> Condition? --> True --> Action1 --> Condition? --> True --> Action1 --> ... --> False --> Exit
```

**Note:** Loop implementation examples are referenced in control_structures.cpp comments but not fully implemented in the current code.

---

## Summary of Concepts Covered

From the course code, the following concepts have been actively learned and practiced:

✅ Program structure and main function  
✅ Comments (single-line and multi-line)  
✅ Tokens and their classification  
✅ Variables and declaration  
✅ Local and global scope  
✅ Built-in data types  
✅ Arithmetic, comparison, and logical operators  
✅ Input/Output operations with cin and cout  
✅ Header files (system and user-defined)  
✅ Reference variables  
✅ Type casting  
✅ Constants  
✅ Manipulators for formatting output  
✅ Control structures (sequence, selection)  
✅ Scope resolution operator  

---

**Last Updated:** 2026-07-13

---

## Memory Management

### Stack vs Heap

**Stack Memory:**
- Automatically allocated and deallocated
- Faster access
- Limited size (typically smaller)
- LIFO (Last In First Out) structure
- Scope-dependent lifecycle

**Heap Memory:**
- Manual allocation and deallocation (in C)
- Slower access
- Larger available space
- Persistent until explicitly freed
- Used with `new` and `delete` keywords

```cpp
// Stack allocation (automatic)
int x = 10;

// Heap allocation (manual)
int* ptr = new int(10);
delete ptr;  // Must deallocate
```

### Memory Leaks

A memory leak occurs when dynamically allocated memory is not freed:
- Unused memory accumulates
- Application performance degrades
- Eventually system runs out of memory

Prevention:
- Always pair `new` with `delete`
- Use smart pointers (modern C++)
- Consider RAII (Resource Acquisition Is Initialization)

---

## Pointers & References Detailed

### Pointers

**Definition:** A variable that stores a memory address

```cpp
int x = 5;
int* ptr = &x;    // Address-of operator &
int value = *ptr; // Dereference operator *
```

**Key Concepts:**
- `&` (address-of): Gets the memory address
- `*` (dereference): Accesses value at address
- `nullptr`: Null pointer (preferred over NULL)
- Dangling pointers: Point to freed memory (dangerous!)

### References

**Definition:** An alias to an existing variable

```cpp
int x = 5;
int& ref = x;  // Reference to x
ref = 10;      // Changes x to 10
```

**Differences from Pointers:**
| Feature | Pointer | Reference |
|---------|---------|-----------|
| Reassignment | Yes | No |
| Null value | Yes | No |
| Syntax | `*ptr` | `ref` |
| Memory address | Can change | Fixed |
| Indirection | Multiple levels | Single level |

---

## Object-Oriented Programming

### Classes & Objects

**Basic Structure:**
```cpp
class Car {
private:
    string color;
    int speed;

public:
    // Constructor
    Car(string c, int s) : color(c), speed(s) {}
    
    // Getter
    string getColor() const { return color; }
    
    // Setter
    void setSpeed(int s) { speed = s; }
};
```

### Encapsulation

- **Private:** Only accessible within the class
- **Public:** Accessible from outside
- **Protected:** Accessible in derived classes

Benefits:
- Data hiding
- Controlled access
- Easier maintenance

### Inheritance

```cpp
class Vehicle { /* base class */ };
class Car : public Vehicle { /* derived class */ };
```

Types:
- **Public inheritance:** IS-A relationship
- **Private inheritance:** Implementation detail
- **Protected inheritance:** Controlled interface

### Polymorphism

**Virtual Functions:**
```cpp
class Shape {
public:
    virtual void draw() { cout << "Drawing shape"; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing circle"; }
};
```

Benefits:
- Runtime type flexibility
- Code reusability
- Extensible design

---

## Functions & Scope

### Function Declarations vs Definitions

**Declaration:**
```cpp
int add(int a, int b);  // Tells compiler function exists
```

**Definition:**
```cpp
int add(int a, int b) {
    return a + b;
}
```

### Variable Scope

**Global Scope:**
- Accessible throughout the program
- Memory exists for program lifetime
- Can lead to naming conflicts

**Local Scope:**
- Accessible only within the block
- Memory allocated when entering scope
- Memory freed when leaving scope

**Static Variables:**
```cpp
void counter() {
    static int count = 0;
    count++;
}
```
- Retains value between function calls
- Initialized only once

### Function Parameters

**Pass by Value:**
```cpp
void modify(int x) { x = 10; }  // Copy passed
```

**Pass by Reference:**
```cpp
void modify(int& x) { x = 10; }  // Original modified
```

**Pass by Pointer:**
```cpp
void modify(int* x) { *x = 10; }  // Original modified
```

---

## Operators & Precedence

### Operator Categories

**Arithmetic:** `+`, `-`, `*`, `/`, `%`

**Relational:** `==`, `!=`, `<`, `>`, `<=`, `>=`

**Logical:** `&&` (AND), `||` (OR), `!` (NOT)

**Bitwise:** `&`, `|`, `^`, `~`, `<<`, `>>`

**Assignment:** `=`, `+=`, `-=`, `*=`, `/=`, etc.

### Operator Precedence (High to Low)

1. Postfix: `++`, `--`, `()`, `[]`, `.`
2. Unary: `++`, `--`, `!`, `~`, `+`, `-`, `*`, `&`, `sizeof`
3. Multiplicative: `*`, `/`, `%`
4. Additive: `+`, `-`
5. Shift: `<<`, `>>`
6. Relational: `<`, `>`, `<=`, `>=`
7. Equality: `==`, `!=`
8. Bitwise AND: `&`
9. Bitwise XOR: `^`
10. Bitwise OR: `|`
11. Logical AND: `&&`
12. Logical OR: `||`
13. Conditional: `?:`
14. Assignment: `=`, `+=`, etc.

**Pro Tip:** Use parentheses `()` to explicitly control precedence and improve code readability.

---

## Type System

### Primitive Types

**Integer Types:**
- `char`: 1 byte (-128 to 127)
- `short`: 2 bytes
- `int`: Usually 4 bytes
- `long`: At least 4 bytes
- `long long`: At least 8 bytes

**Floating-Point Types:**
- `float`: 4 bytes, ~6-7 decimal digits
- `double`: 8 bytes, ~15-16 decimal digits
- `long double`: Extended precision

**Boolean Type:**
- `bool`: true/false, typically 1 byte

### Type Conversion

**Implicit (Automatic):**
```cpp
int x = 10;
double y = x;  // int automatically converted to double
```

**Explicit (Casting):**
```cpp
double d = 3.14;
int x = (int)d;      // C-style cast
int y = static_cast<int>(d);  // C++ style (preferred)
```

### Type Modifiers

- `unsigned`: No negative values
- `signed`: Allows negative values (default)
- `const`: Immutable value
- `volatile`: May change unexpectedly

---

## Preprocessor Directives

### #include

**System Headers:**
```cpp
#include <iostream>  // Angle brackets for system headers
```

**User Headers:**
```cpp
#include "myheader.h"  // Quotes for local files
```

### #define

```cpp
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```

**Modern Alternative:** Use `const` and inline functions

### Header Guards

```cpp
#ifndef MYHEADER_H
#define MYHEADER_H

// Header content

#endif
```

Prevents multiple inclusions and compilation errors.

### Conditional Compilation

```cpp
#ifdef DEBUG
    cout << "Debug mode";
#endif
```

Useful for platform-specific or debug code.

---

## Standard Library Essentials

### iostream

**Input/Output Operations:**
```cpp
cin >> x;           // Input
cout << x;          // Output
cerr << "Error";    // Error output
clog << "Log";      // Log output
```

**Manipulators:**
```cpp
cout << fixed << setprecision(2) << 3.14159;
cout << hex << 255;        // Hexadecimal
cout << setw(10) << "Text"; // Field width
```

### string

**Basic Operations:**
```cpp
string s = "Hello";
s += " World";
s.length();
s.substr(0, 5);
s.find("World");
```

### vector

**Dynamic Array:**
```cpp
vector<int> v;
v.push_back(10);
v.pop_back();
v.size();
v[0];  // Access
```

### algorithm

**Common Functions:**
```cpp
sort(v.begin(), v.end());
find(v.begin(), v.end(), value);
reverse(v.begin(), v.end());
```

---

## Common Pitfalls & Best Practices

### Pitfalls

1. **Uninitialized Variables**
   ```cpp
   int x;      // Contains garbage value!
   int y = 0;  // Safe
   ```

2. **Array Out of Bounds**
   ```cpp
   int arr[5];
   arr[5] = 10;  // Undefined behavior!
   ```

3. **Dangling Pointers**
   ```cpp
   int* ptr = new int(10);
   delete ptr;
   cout << *ptr;  // Undefined behavior!
   ```

4. **Function Declaration After Usage**
   ```cpp
   // Must declare function before use or use forward declaration
   int add(int a, int b);
   ```

### Best Practices

1. **Use meaningful variable names**
   ```cpp
   int age;        // Good
   int a;          // Poor
   ```

2. **Initialize variables at declaration**
   ```cpp
   int x = 0;
   string name = "";
   ```

3. **Use const for unchanging values**
   ```cpp
   const int MAX_SIZE = 100;
   ```

4. **Add comments for complex logic**
   ```cpp
   // Bubble sort implementation
   for (int i = 0; i < n - 1; i++) {
       // ...
   }
   ```

5. **Use proper indentation and formatting**
   - Improves readability
   - Easier to maintain

6. **Validate user input**
   ```cpp
   if (cin >> x) {
       // Process valid input
   } else {
       // Handle error
   }
   ```

7. **Use forward declarations to manage dependencies**
   ```cpp
   class MyClass;  // Forward declaration
   ```

---

## Performance Considerations

### Optimization Tips

1. **Pass large objects by reference**
   ```cpp
   void process(const MyClass& obj);  // Better than pass by value
   ```

2. **Use `++i` instead of `i++` in loops**
   ```cpp
   for (int i = 0; i < 100; ++i);  // No temporary object created
   ```

3. **Avoid unnecessary copies**
   ```cpp
   vector<int> v = {1, 2, 3};
   auto& ref = v;  // Reference, no copy
   ```

4. **Use appropriate data structures**
   - `vector` for indexed access
   - `set` for unique, sorted elements
   - `map` for key-value pairs
   - `unordered_map` for fast lookups

5. **Minimize system calls**
   - Batch I/O operations
   - Use buffering effectively

### Time Complexity Awareness

- **O(1):** Constant time (best)
- **O(log n):** Logarithmic
- **O(n):** Linear
- **O(n log n):** Linearithmic
- **O(n²):** Quadratic (avoid for large inputs)
- **O(2ⁿ):** Exponential (extremely slow)

Choose algorithms appropriate for your data size and requirements.

---

## Quick Reference

| Concept | Syntax | Example |
|---------|--------|---------|
| Pointer | `type*` | `int* ptr = &x;` |
| Reference | `type&` | `int& ref = x;` |
| const | `const type` | `const int x = 5;` |
| Array | `type[size]` | `int arr[10];` |
| Function | `type func()` | `int add(int a, int b)` |
| Loop | `for/while/do-while` | `for (int i = 0; i < n; ++i)` |

---

## Further Learning

- Read official C++ documentation
- Study design patterns
- Practice with coding challenges
- Review established coding standards (Google C++ Style Guide)
- Explore modern C++ features (C++11, C++17, C++20)

---

**Last Updated:** 2026-07-13
