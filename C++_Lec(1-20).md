# Lec-01
##  1) What is a programming Language & why C++ ?
## What is a **Programming Language**?

A **programming language** is a way for **humans to communicate with computers**.

* It provides a **set of rules** (syntax) and **words** (keywords) to write instructions that a computer can **understand and execute**.
* These instructions tell the computer **what to do**, like calculations, decision making, repeating actions, etc.
* C++ is a general-purpose programming language created by Bjarne Stroustrup in 1979 as an extension of the C programming language. It supports both procedural and object-oriented programming (OOP).


### 🔹 Why **C++**?

C++ is one of the **most powerful and widely used** programming languages. Here's **why it's special**:

#### ✅ 1. **Performance & Speed**

* C++ is close to the hardware (low-level features), so it's **super fast** and used in **gaming, real-time systems, and operating systems**.

#### ✅ 2. **Object-Oriented Programming (OOP)**

* Supports concepts like **classes**, **inheritance**, and **polymorphism**, which help in **organizing and managing large codebases**.

#### ✅ 3. **Standard Template Library (STL)**

* Built-in libraries for **data structures (like vectors, sets, maps)** and **algorithms (like sort, search)** — saves development time.

#### ✅ 4. **Memory Control**

* C++ gives **fine control over memory** using **pointers** and **dynamic memory**, which is useful for system-level programming.

#### ✅ 5. **Foundation Language**

* Many modern languages (like Java, C#, and even parts of Python) are influenced by C++. Learning C++ helps you **understand how computers work internally**.


### 🔹 Where is C++ used?

| Field              | Example                                    |
| ------------------ | ------------------------------------------ |
| System Programming | Operating Systems like Windows/Linux parts |
| Game Development   | Game engines like Unreal Engine            |
| Competitive Coding | Because it's fast and has STL              |
| Embedded Systems   | Programming microcontrollers and hardware  |
| Financial Systems  | High-speed trading software                |

---
## 2) Installation of G++:
##  💻 🔹 For **Windows** (using MinGW)

### ✅ Step 1: Download MinGW

1. Go to the official site: [https://www.mingw-w64.org/](https://www.mingw-w64.org/)
2. Or directly: [MinGW-w64 builds (sourceforge)](https://sourceforge.net/projects/mingw-w64/)

### ✅ Step 2: Install MinGW

* Choose architecture: `x86_64`
* Threads: `posix`
* Exception: `seh`
* Install to a simple path like `C:\mingw-w64\`

### ✅ Step 3: Set Environment Variable

1. Press **Windows + S**, search for **Environment Variables**.
2. Click `Environment Variables > System variables > Path > Edit`.
3. Add:

   ```
   C:\mingw-w64\bin
   ```

   (Use the correct folder path where you installed MinGW.)

### ✅ Step 4: Verify Installation

Open **Command Prompt** and type:

```bash
g++ --version
```

You should see the version info like:

```
g++ (x86_64-posix-seh, built by ...) x.x.x
---

## ✅ How to Compile and Run C++ Code

Create a file `hello.cpp`:

```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!";
    return 0;
}
```

### 🔹 Compile:

```bash
g++ hello.cpp -o hello
```

### 🔹 Run:

```bash
./hello   # On Windows use: hello.exe
```

---
---

# Lec-02
* 1979 -->Bjarne Stroustrup
*  fast Program, more control via system resources + memory management
*  High Performance
*  Updates:
     1) 2011 -->C++11
     2) 2014 -->C++14
     3) 2017 -->C++17

## Basic Structure of Program

### 🔷 Simple C++ Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << endl;
    return 0;
}
```

---

### 🔍 Line-by-line and word-by-word Explanation

---

#### 🔹 `#include <iostream>`

* `#include` → A **preprocessor directive**. It tells the compiler to **include** a file before starting the actual compilation.
* `<iostream>` → This is a **header file** that lets you use **input and output**, like `cin` and `cout`.

📌 Think of this line as:
👉 *"Hey compiler, include the file that lets me use `cout` to print and `cin` to take input."*

---

#### 🔹 `using namespace std;`

* `using` → Allows us to **avoid writing `std::`** before things like `cout`, `cin`, etc.
* `namespace` → A **container** for identifiers (names). `std` is the **standard namespace**.
* `std` → Stands for **standard**. It has useful stuff like `cout`, `cin`, `string`, etc.

📌 This line means:
👉 *"I will use standard names directly, no need to write `std::cout`, I can just write `cout`."*

---

#### 🔹 `int main() {`

* `int` → Return type of the function. It means this function will return an **integer value**.
* `main()` → The **starting point** of every C++ program. It’s where the program begins.
* `{` → Start of the **main function’s body** (all code inside this will run).

📌 It means:
👉 *"This is the main function. Start here!"*

---

#### 🔹 `cout << "Hello, world!" << endl;`

* `cout` → Stands for **"character output"**. It prints to the screen.
* `<<` → Called the **insertion operator**, it sends data to `cout`.
* `"Hello, world!"` → A **string literal**, the actual message being printed.
* `endl` → Ends the line and **moves to the next line**. Like pressing "Enter".
* `;` → Ends the statement.

📌 It means:
👉 *"Print ‘Hello, world!’ to the screen and go to a new line."*

---

#### 🔹 `return 0;`

* `return` → Sends a value **back to the system**.
* `0` → Means the program ended **successfully**.
* `;` → Ends the statement.

📌 It means:
👉 *"I'm done. Everything went okay."*

---

#### 🔹 `}`

* This closes the **main function**.

---

### ✅ Output

```
Hello, world!
```

---
---

# Lec-03

## Variables & Comments:
1)Variables:
👉 Variables are like boxes that store data (like numbers, words, etc.)

2)Comments:
👉 Comments are notes for the programmer. The compiler ignores them.

---
---

# Lec-04

## Variable Scope & Data Type:

Great! Let's learn about **Variable Scope** and **Data Types** in C++ with easy explanations and examples. 🧠✨

---

## 🔶 PART 1: **Variable Scope in C++**

### 📌 What is Scope?

**Scope** means **where a variable can be used (seen/accessible)** in your program.

---

### ✅ Types of Scope:

| Scope Type       | Meaning                                                                                  |
| ---------------- | ---------------------------------------------------------------------------------------- |
| **Global Scope** | Variable is declared **outside** all functions — can be used **anywhere**.               |
| **Local Scope**  | Variable is declared **inside** a function or block — used **only there**.               |
| **Block Scope**  | Inside `{}` brackets like in loops or `if` statements — used only **inside that block**. |

---

### 🔷 Example:

```cpp
#include <iostream>
using namespace std;

int globalVar = 100;  // 🌍 Global Scope

int main() {
    int localVar = 50;  // 📌 Local to main()

    if (true) {
        int blockVar = 20;  // 🔒 Block Scope
        cout << "Inside block: " << blockVar << endl;
    }

    // cout << blockVar << endl; ❌ Error! blockVar is not visible here

    cout << "Global: " << globalVar << endl;
    cout << "Local: " << localVar << endl;

    return 0;
}
```

---

### 🔍 Output:

```
Inside block: 20
Global: 100
Local: 50
```

---

## 🔶 PART 2: **Data Types in C++**

### 📌 What is a Data Type?

* A **data type** tells the compiler **what kind of data** a variable will store.
* Data types in C++ are categorized in three groups:
1) Built-in:
   * int
   * float
   * char
   * double
   * bool
2) User-defined :
   * struct
   * union
   * enum
3) Derived:
   * array
   * function
   * pointer


---
---

# Lec-05

## Basic input/Output:

* C++ comes with libraries which helps us in performing input/output.
* In C++ sequence of bytes corresponding to input and output are commonly known as streams.

1) Input Stream: Direction of flow of bytes takes place from input device(for ex Keyboard) to the main memory.

2) Output Stream: Direction of flow of bytes takes place from main memory to the output device (for example Display)

---
---

# Lec-06

## Header files & Operators:

### 📘 Header Files:

* **Pre-written code**
* Start with `#include`
* Examples: `<iostream>`, `<cmath>`, `<string>`, etc.

### 🔢 Operators:

* Perform operations like math, logic, comparison
* Common types: Arithmetic, Assignment, Comparison, Logical

---
---

# Lec-07

## Reference Variables & Typecasting:

## 🔷 1. **Reference Variables in C++**

A **reference variable** is another **name (alias)** for an existing variable.
It **refers to the same memory location**, not a copy.

---

### 🔷 Syntax:

```cpp
datatype &ref = original;
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &y = x;  // y is a reference to x

    cout << "x = " << x << ", y = " << y << endl;

    y = 20;  // changing y will also change x
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
```

---

### 🧾 Output:

```
x = 10, y = 10
x = 20, y = 20
```

### 🧠 Key Points:

* `&y` means `y` is a **reference** to `x`.
* Changing `y` also changes `x` (because they point to the **same memory**).

---

## 🔷 2. **Typecasting in C++**

### 📌 What is Typecasting?

**Typecasting** means **converting one data type into another**.

---

### 🔷 Two Types:

| Type         | Syntax                           | Example                    |
| ------------ | -------------------------------- | -------------------------- |
| **Implicit** | Automatic conversion by compiler | `int x = 5.7;` (becomes 5) |
| **Explicit** | Done manually by programmer      | `float(x)`, `(int)y`       |

---

### ✅ Example 1: Implicit Typecasting

```cpp
#include <iostream>
using namespace std;

int main() {
    float f = 5.7;
    int x = f; // float to int automatically (implicit)

    cout << "x = " << x << endl;  // Output: x = 5

    return 0;
}
```

---

### ✅ Example 2: Explicit Typecasting

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    float result = (float)a / b; // casting a to float
    cout << "Result = " << result << endl;  // Output: 3.3333

    return 0;
}
```

---

### 🧠 Key Points:

| Cast Type  | What it does                            | Example               |
| ---------- | --------------------------------------- | --------------------- |
| `(int)`    | Converts to integer                     | `(int)3.9` → `3`      |
| `(float)`  | Converts to float                       | `(float)3/2` → `1.5`  |
| `(double)` | Converts to double (more precise float) | `(double)5/2` → `2.5` |

---

## ✅ Summary Table:

| Concept       | Meaning                            | Example        |
| ------------- | ---------------------------------- | -------------- |
| Reference Var | Another name for the same variable | `int &y = x;`  |
| Typecasting   | Converting one type to another     | `(float)a / b` |

---
---

# Lec-08

## Constants, Manipulators & Operator Precedence:

## 🔷 1. **Constants in C++**

### 📌 What is a Constant?

A **constant** is a variable whose value **cannot be changed** once it is defined.

---

### ✅ Syntax:

```cpp
const datatype variable = value;
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    const int age = 18;
    // age = 20; ❌ Error! Cannot modify a constant

    cout << "Age is: " << age << endl;
    return 0;
}
```

### 🧠 Key Points:

* Use `const` before a variable to make it constant.
* Changing a constant value will give a **compile-time error**.

---

## 🔷 2. **Manipulators in C++**

### 📌 What are Manipulators?

**Manipulators** are used to **format output** — like spacing, alignment, precision, etc.

### ✅ Common Manipulators (from `<iomanip>`):

| Manipulator       | Use                      | Example                            |
| ----------------- | ------------------------ | ---------------------------------- |
| `endl`            | Ends the line (new line) | `cout << "Hello" << endl;`         |
| `setw(n)`         | Sets width of output     | `cout << setw(5) << 10;`           |
| `setprecision(n)` | Sets decimal precision   | `cout << setprecision(2) << 3.14;` |
| `fixed`           | Fix decimal places       | Used with `setprecision()`         |

> 💡 Include `#include <iomanip>` for these manipulators.

---

### ✅ Example:

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float pi = 3.14159;

    cout << "Default: " << pi << endl;
    cout << "Fixed & setprecision(2): " << fixed << setprecision(2) << pi << endl;
    cout << "setw(10): " << setw(10) << pi << endl;

    return 0;
}
```

### 🧾 Output:

```
Default: 3.14159
Fixed & setprecision(2): 3.14
setw(10):       3.14
```

---

## 🔷 3. **Operator Precedence in C++**

### 📌 What is Operator Precedence?

When **more than one operator** is used in an expression, **operator precedence** decides **which is solved first**.

---

### ✅ Example:

```cpp
int result = 10 + 5 * 2;
```

* Multiplication (`*`) is **done first**, then addition.
* So `5 * 2 = 10`, then `10 + 10 = 20`

---

### 🔢 C++ Operator Precedence (High to Low):

| Precedence Level | Operators            | Description              |    |                 |
| ---------------- | -------------------- | ------------------------ | -- | --------------- |
| 1 (highest)      | `()`, `[]`, `.`      | Function call, access    |    |                 |
| 2                | `++`, `--`, `!`, `-` | Unary operators          |    |                 |
| 3                | `*`, `/`, `%`        | Multiplication, Division |    |                 |
| 4                | `+`, `-`             | Addition, Subtraction    |    |                 |
| 5                | `<`, `>`, `<=`, `>=` | Relational operators     |    |                 |
| 6                | `==`, `!=`           | Equality check           |    |                 |
| 7                | `&&`, \`             |                          | \` | Logical AND, OR |
| 8 (lowest)       | `=`, `+=`, `-=` etc. | Assignment               |    |                 |

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 3;
    int result = a + b * c; // b*c happens first

    cout << "Result: " << result << endl; // 5 + (10 * 3) = 35
    return 0;
}
```

---

## ✅ Summary Table:

| Concept                 | Description                             | Example                     |
| ----------------------- | --------------------------------------- | --------------------------- |
| **Constants**           | Fixed value, can’t change               | `const int x = 10;`         |
| **Manipulators**        | Format output (`endl`, `setw`, `fixed`) | `cout << setw(5) << x;`     |
| **Operator Precedence** | Order in which operations are performed | `a + b * c` → `b * c` first |

---
---
# Lec-9

## Control Structures & If Else and Switch-Case Statement:

## 🔷 1. **Control Structures in C++**

### 📌 What are Control Structures?

Control structures **control the flow of your code** — they decide **which part of the code to run**.

---

### ✅ Types of Control Structures:

| Type           | Purpose                                       |
| -------------- | --------------------------------------------- |
| **Sequential** | Code runs line by line                        |
| **Selection**  | Code chooses between options (`if`, `switch`) |
| **Looping**    | Repeats code (`for`, `while`)                 |
| **Jumping**    | Jumps to another part (`break`, `continue`)   |

---

## 🔷 2. **If, Else If, Else**

### ✅ Syntax:

```cpp
if (condition) {
    // code runs if condition is true
}
else if (another_condition) {
    // code runs if this new condition is true
}
else {
    // code runs if no condition above is true
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 75) {
        cout << "Grade B" << endl;
    } else if (marks >= 50) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
```

## 🔷 3. **Switch-Case Statement**

### 📌 Use when you want to match **one variable** with **many exact values** (like menu, options, etc.)

---

### ✅ Syntax:

```cpp
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    default:
        // code if none match
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day";
    }

    return 0;
}
```
---

## ✅ Summary Table:

| Structure | Used For            | Best When...                    |
| --------- | ------------------- | ------------------------------- |
| `if`      | Single condition    | Only one check needed           |
| `else if` | Multiple conditions | Check multiple ranges           |
| `else`    | Fallback/default    | Nothing else is true            |
| `switch`  | Match single value  | Exact value matching like menus |

---
---
# Lec-10

## For, While and do-while loops:

### 🧠 Why Use Loops?

Loops are used to **repeat a block of code** multiple times, either a fixed number of times or until a condition is met.

---

## 🔷 1. **For Loop**

### ✅ Syntax:

```cpp
for (initialization; condition; update) {
    // code to repeat
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Hello " << i << endl;
    }
    return 0;
}
```

### 🧾 Output:

```
Hello 1  
Hello 2  
Hello 3  
Hello 4  
Hello 5
```

> ✅ Best when you know **how many times** to repeat.

---

## 🔷 2. **While Loop**

### ✅ Syntax:

```cpp
while (condition) {
    // code to repeat
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << "While Loop: " << i << endl;
        i++;
    }
    return 0;
}
```

### 🧾 Output:

```
While Loop: 1  
While Loop: 2  
While Loop: 3  
While Loop: 4  
While Loop: 5
```

> ✅ Best when you **don’t know in advance** how many times to loop.

---

## 🔷 3. **Do-While Loop**

### ✅ Syntax:

```cpp
do {
    // code to repeat
} while (condition);
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << "Do-While Loop: " << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}
```

### 🧾 Output:

```
Do-While Loop: 1  
Do-While Loop: 2  
Do-While Loop: 3  
Do-While Loop: 4  
Do-While Loop: 5
```

> ✅ It runs **at least once** even if the condition is **false** at the beginning.

---

## 🔁 Difference Between Loops:

| Loop Type  | Condition Checked? | Use When...                     |
| ---------- | ------------------ | ------------------------------- |
| `for`      | Before each loop   | You know how many times to loop |
| `while`    | Before each loop   | Loop until condition is false   |
| `do-while` | After running once | Must run at least once          |

---

### ⚠️ Example Where `do-while` is Needed:

```cpp
int n;
do {
    cout << "Enter positive number: ";
    cin >> n;
} while (n <= 0);
```

> This ensures the user is **prompted at least once**, even if `n` is already valid.

---

## ✅ Summary:

| Loop       | Checks Condition | Executes at Least Once | Best For                    |
| ---------- | ---------------- | ---------------------- | --------------------------- |
| `for`      | Before           | ❌                      | Known number of repetitions |
| `while`    | Before           | ❌                      | Unknown repetitions         |
| `do-while` | After            | ✅                      | At least once, then check   |

---
---

# Lec-11

## Break and Continue Statements:

## 🔷 1. **`break` Statement**

### 📌 What is `break`?

The `break` statement is used to **exit a loop or switch** **immediately**, even if the condition is still true.

---

### ✅ Syntax:

```cpp
for (...) {
    if (condition) {
        break;
    }
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // exits the loop when i == 5
        }
        cout << i << " ";
    }
    return 0;
}
```

### 🧾 Output:

```
1 2 3 4
```

> 🚨 Loop **stops immediately** when `i == 5`

---

## 🔷 2. **`continue` Statement**

### 📌 What is `continue`?

The `continue` statement **skips the current iteration** and goes to the **next one** without running the rest of the loop body.

---

### ✅ Syntax:

```cpp
for (...) {
    if (condition) {
        continue;
    }
    // code that is skipped when continue is used
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // skips when i == 3
        }
        cout << i << " ";
    }
    return 0;
}
```

### 🧾 Output:

```
1 2 4 5
```

> 🟡 `3` is **skipped**, rest are printed

---

## 🔁 Use `break` and `continue` in `while` or `do-while` too:

### ✅ Example with `while`:

```cpp
int i = 0;
while (i < 5) {
    i++;
    if (i == 3) continue;
    cout << i << " ";
}
```

---

## ✅ Summary Table:

| Statement  | What it Does                           | When to Use                             |
| ---------- | -------------------------------------- | --------------------------------------- |
| `break`    | Immediately exits the loop or switch   | You want to **stop the loop early**     |
| `continue` | Skips current loop cycle, goes to next | You want to **skip one iteration only** |

---

### 🧠 Tip:

* `break` = "I'm done, get me out of here!"
* `continue` = "Skip this one, keep looping!"

---
---

# Lec-12

## Pointers:

## 🔷 1. **What is a Pointer?**

A **pointer** is a variable that **stores the memory address** of another variable.

Think of it like:
📦 Variable → stores a value
🧭 Pointer → stores the **location** (address) of that value

---

## 🔷 2. **Syntax of Pointer**

```cpp
datatype* pointerName;
```

* `*` → used to **declare a pointer**
* `&` → used to **get the address** of a variable

---

## 🔷 3. **Simple Example**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;  // ptr stores the address of a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer (ptr): " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;  // dereferencing

    return 0;
}
```

---

### 🧾 Output (Sample):

```
Value of a: 10  
Address of a: 0x61ff0c  
Pointer (ptr): 0x61ff0c  
Value at ptr: 10
```

---

## 🔍 Explanation:

| Symbol     | Meaning                                                                   |
| ---------- | ------------------------------------------------------------------------- |
| `int* ptr` | Declares a pointer to an integer                                          |
| `&a`       | "Address of `a`"                                                          |
| `*ptr`     | "Value at the address stored in `ptr`" (this is called **dereferencing**) |

---

## 🔷 4. **Changing Value Using Pointer**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x;

    *p = 20;  // changing value of x using pointer

    cout << "x = " << x << endl;  // Output: x = 20
    return 0;
}
```

### 🧠 Why? Because `*p` refers to the same location as `x`.

---

## ✅ Pointer Summary Table

| Concept         | Syntax     | Meaning                                |
| --------------- | ---------- | -------------------------------------- |
| Declare pointer | `int* p;`  | `p` stores address of int              |
| Address of var  | `&x`       | Returns memory address of `x`          |
| Dereference ptr | `*p`       | Returns value stored at address in `p` |
| Change via ptr  | `*p = 20;` | Modifies value at address held by `p`  |

---

## 🔷 5. Bonus: Null Pointer

```cpp
int* ptr = nullptr;  // pointer points to nothing
```

Used for **safety** when pointer doesn't have a valid address yet.

---
---

# Lec-13

## Arrays & Pointers Arithmetic:

## 🔷 1. **Arrays in C++**

### 📌 What is an Array?

An **array** is a collection of **elements of the same type**, stored in **contiguous (continuous) memory**.

---

### ✅ Syntax:

```cpp
datatype arrayName[size];
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nums[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
```

### 🧾 Output:

```
10 20 30 40 50
```

---

## 🔷 2. **Pointers with Arrays**

In C++, the **name of the array** (e.g., `nums`) acts like a **pointer** to the **first element**.

---

### ✅ Example:

```cpp
int nums[3] = {5, 10, 15};

cout << nums        << endl; // address of first element
cout << *nums       << endl; // value at address → 5
cout << *(nums + 1) << endl; // value at next element → 10
```

---

## ✅ Pointer Arithmetic

Pointer arithmetic lets you **move through memory** using pointers.

| Expression   | What it does                 | Example Result        |
| ------------ | ---------------------------- | --------------------- |
| `ptr + 1`    | Points to next element       | moves 1 element ahead |
| `*(ptr + i)` | Value at ith index           | same as `arr[i]`      |
| `ptr++`      | Move pointer to next element | useful in loops       |

---

### 🔷 Full Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {10, 20, 30, 40};
    int* ptr = arr;  // pointer to the first element

    cout << "Pointer Arithmetic Output:" << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Value at ptr + " << i << " = " << *(ptr + i) << endl;
    }

    return 0;
}
```

---

### 🧾 Output:

```
Pointer Arithmetic Output:
Value at ptr + 0 = 10  
Value at ptr + 1 = 20  
Value at ptr + 2 = 30  
Value at ptr + 3 = 40
```

---

### 🔍 How it Works in Memory:

If address of `arr[0]` is `0x1000` (assume):

| Index | Element | Address | \*(arr + i) |
| ----- | ------- | ------- | ----------- |
| 0     | 10      | 0x1000  | 10          |
| 1     | 20      | 0x1004  | 20          |
| 2     | 30      | 0x1008  | 30          |
| 3     | 40      | 0x100C  | 40          |

> 💡 Integers take 4 bytes each, so each pointer step moves 4 bytes.

---

## ✅ Summary

| Concept            | Example         | Meaning                              |
| ------------------ | --------------- | ------------------------------------ |
| Array declaration  | `int arr[5];`   | 5 elements of type int               |
| Pointer to array   | `int* p = arr;` | Points to first element of `arr`     |
| Pointer arithmetic | `*(p + i)`      | Accesses next elements like `arr[i]` |

---
---

# Lec-14:

## Structures, Unions & Enums:

## 🔷 1. **Structures in C++**

### 📌 What is a Structure?

A **structure** groups variables of **different data types** under one name.

---

### ✅ Syntax:

```cpp
struct StructureName {
    datatype member1;
    datatype member2;
    ...
};
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s1 = {101, "Gajanan", 92.5};

    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
```

---

### 🧠 Key Points:

* Structure groups multiple values.
* You can access members using `.` (dot operator).

---

## 🔷 2. **Unions in C++**

### 📌 What is a Union?

A **union** is like a structure, but it shares the **same memory** for all its members.
👉 So only **one member can hold a value at a time**.

---

### ✅ Syntax:

```cpp
union UnionName {
    datatype member1;
    datatype member2;
    ...
};
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

union Data {
    int intVal;
    float floatVal;
};

int main() {
    Data d;
    d.intVal = 10;
    cout << "Integer: " << d.intVal << endl;

    d.floatVal = 5.5;
    cout << "Float: " << d.floatVal << endl;

    // ⚠️ Now intVal is overwritten
    cout << "Integer (after float set): " << d.intVal << endl;

    return 0;
}
```

---

### 🧠 Output:

```
Integer: 10  
Float: 5.5  
Integer (after float set): garbage value
```

---

### 🧠 Key Difference:

| Feature | Structure               | Union                          |
| ------- | ----------------------- | ------------------------------ |
| Memory  | Each member gets memory | All members share same memory  |
| Usage   | Store all values        | Store only one value at a time |

---

## 🔷 3. **Enums in C++**

### 📌 What is an Enum?

An **enum** (enumeration) is a way to give **names to integer constants**.
👉 Makes code **more readable**.

---

### ✅ Syntax:

```cpp
enum EnumName { VALUE1, VALUE2, ... };
```

By default:

* `VALUE1 = 0`, `VALUE2 = 1`, etc.

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    Day today = WED;

    if (today == WED) {
        cout << "It's Wednesday!" << endl;
    }

    cout << "Value of SUN is: " << SUN << endl; // Output: 6

    return 0;
}
```

---

### 🧠 You can also assign custom values:

```cpp
enum Level { LOW = 1, MEDIUM = 5, HIGH = 10 };
```

---

## ✅ Summary Table

| Feature | struct                     | union                            | enum                   |
| ------- | -------------------------- | -------------------------------- | ---------------------- |
| Use     | Group different data types | Save memory, one value at a time | Define named constants |
| Memory  | Separate for each member   | Shared for all members           | Not for storing values |
| Access  | `s.name`, `s.roll`         | `u.intVal`, `u.floatVal`         | `if (x == HIGH)`       |

---
---

# Lec-15

## Functions & Function Prototypes:

## 🔷 1. **What is a Function?**

A **function** is a block of code that performs a **specific task**.

You can call it **any number of times**, instead of rewriting the same code.

---

### ✅ Types of Functions in C++:

1. **Library functions** – like `sqrt()`, `pow()`, `cin`, `cout`
2. **User-defined functions** – you create your own functions

---

### ✅ Syntax of a Function:

```cpp
return_type function_name(parameter_list) {
    // code to execute
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, Gajanan!" << endl;
}

int main() {
    greet();  // calling the function
    greet();  // can call again
    return 0;
}
```

🧾 Output:

```
Hello, Gajanan!
Hello, Gajanan!
```

---

## 🔷 2. **Function with Parameters and Return Value**

```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(10, 20);  // function call
    cout << "Sum = " << sum << endl;
    return 0;
}
```

🧾 Output:

```
Sum = 30
```

---

## 🔷 3. **Function Prototypes**

### 📌 What is a Function Prototype?

A **function prototype** is a **declaration** of the function **before `main()`**, so the compiler knows it exists.

Used when the full function is written **after `main()`**.

---

### ✅ Syntax:

```cpp
return_type function_name(parameter_list);  // prototype
```

---

### ✅ Example with Function Prototype:

```cpp
#include <iostream>
using namespace std;

// 🔸 Function prototype
int multiply(int, int);

int main() {
    int result = multiply(4, 5);
    cout << "Result = " << result << endl;
    return 0;
}

// 🔸 Function definition (after main)
int multiply(int a, int b) {
    return a * b;
}
```

🧾 Output:

```
Result = 20
```

---

## 🧠 Why Use Prototypes?

* Helps organize large programs
* Useful when defining functions **after `main()`**
* Required in C++, optional in some small cases

---

## ✅ Summary

| Feature            | Purpose                                  | Example                       |
| ------------------ | ---------------------------------------- | ----------------------------- |
| Function           | Block of code to perform a task          | `int sum(int a, int b)`       |
| Call a function    | Run the function                         | `sum(5, 3);`                  |
| Function prototype | Declare function before use              | `int sum(int, int);`          |
| Return type        | What function gives back (`int`, `void`) | `void show();` or `int add()` |

---
---

# Lec-16

## Call by Value & Call by Reference:

## 🔷 1. **Call by Value**

### 📌 In **Call by Value**, a **copy** of the variable is passed to the function.

* Changes inside the function **do not affect** the original variable.

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100;  // only a copy is changed
}

int main() {
    int a = 10;
    changeValue(a);
    cout << "Value of a: " << a << endl;  // still 10
    return 0;
}
```

🧾 Output:

```
Value of a: 10
```

> ✅ Changes made to `x` **don’t affect** the original `a`.

---

## 🔷 2. **Call by Reference**

### 📌 In **Call by Reference**, the **actual variable** is passed using a **reference**.

* Changes **do affect** the original variable.

---

### ✅ Syntax:

```cpp
void func(int &x)  // note the &
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

void changeValue(int &x) {
    x = 100;  // modifies original variable
}

int main() {
    int a = 10;
    changeValue(a);
    cout << "Value of a: " << a << endl;  // now 100
    return 0;
}
```

🧾 Output:

```
Value of a: 100
```

> ✅ Since `x` is a reference to `a`, changing `x` also changes `a`.

---

## 🔁 Quick Comparison

| Feature                  | Call by Value                 | Call by Reference         |
| ------------------------ | ----------------------------- | ------------------------- |
| What is passed?          | A **copy** of the variable    | The **original** variable |
| Changes affect original? | ❌ No                          | ✅ Yes                     |
| Syntax                   | `void func(int x)`            | `void func(int &x)`       |
| Safety                   | Safer (no accidental changes) | Riskier but more powerful |

---

## ✅ Summary

| Concept           | Description                     |
| ----------------- | ------------------------------- |
| Call by Value     | Original data is **safe**       |
| Call by Reference | Data is **shared and modified** |
| Reference Symbol  | Use `&` in function parameter   |

---
---

# Lec-17

## Inline Functions, Default Arguments & Constant Arguments:

## 🔷 1. **Inline Functions**

### 📌 What is an Inline Function?

An **inline function** tells the compiler to **insert the function code directly** at the point of the call — instead of making a regular function call.

---

### ✅ Syntax:

```cpp
inline return_type function_name(parameters) {
    // small code
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 4: " << square(4) << endl;
    return 0;
}
```

🧾 Output:

```
Square of 4: 16
```

---

### 🧠 Why Use Inline?

| Advantage           | Notes                         |
| ------------------- | ----------------------------- |
| Faster Execution    | No overhead of function call  |
| For small functions | Like `sum()`, `square()`, etc |

---

> ❗ Avoid for **large functions** — it increases code size.

---

## 🔷 2. **Default Arguments**

### 📌 What are Default Arguments?

Default arguments let you call a function **without passing all arguments** — missing ones take default values.

---

### ✅ Syntax:

```cpp
void greet(string name = "Guest") {
    cout << "Hello, " << name << endl;
}
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();            // uses default "Guest"
    greet("Gajanan");   // uses passed value
    return 0;
}
```

🧾 Output:

```
Hello, Guest!
Hello, Gajanan!
```

---

### 🧠 Key Rule:

* Default arguments must be defined **from right to left**.

```cpp
// ✅ Okay
void example(int a, int b = 5, int c = 10);

// ❌ Wrong
void wrong(int a = 5, int b); // error
```

---

## 🔷 3. **Constant Arguments**

### 📌 What are Constant Arguments?

If you **don’t want a function to modify** the parameter, mark it as `const`.

---

### ✅ Syntax:

```cpp
void printMessage(const string name);
```

---

### ✅ Example:

```cpp
#include <iostream>
using namespace std;

void show(const int x) {
    // x = 10; ❌ Not allowed
    cout << "Value: " << x << endl;
}

int main() {
    int num = 5;
    show(num);  // Safe, num won’t be modified
    return 0;
}
```

🧾 Output:

```
Value: 5
```

---

### 🧠 Why Use Constant Arguments?

| Benefit               | When to Use                     |
| --------------------- | ------------------------------- |
| Prevents modification | Use for safety in read-only use |
| Works with references | `void display(const string &s)` |

---

## ✅ Summary Table

| Feature               | Use                                                | Example                           |
| --------------------- | -------------------------------------------------- | --------------------------------- |
| **Inline**            | Small function, speed up by avoiding function call | `inline int add(int a, int b)`    |
| **Default Argument**  | Allow missing parameters in function calls         | `void greet(string name="Guest")` |
| **Constant Argument** | Prevent parameter from being changed               | `void show(const int x)`          |

---
---

# Lec-18

## Recursions & Recursive Functions:

## 🔷 1. **What is Recursion?**

> 📌 A recursive function is a function that **calls itself** during its execution.

It breaks a **big problem into smaller sub-problems** until a base condition is met.

---

### ✅ Syntax:

```cpp
return_type function_name(parameters) {
    if (base_case)
        return result;
    else
        return function_name(smaller_problem);
}
```

---

## 🔷 2. **Simple Example: Factorial**

### ⚙️ `n! = n * (n-1) * (n-2) * ... * 1`

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;              // base case
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
```

🧾 Output:

```
Factorial of 5 is 120
```

---

## 🔷 3. **Important Concepts**

### ✅ Base Case:

Stops recursion — prevents infinite calls.
Example: `if (n <= 1) return 1;`

### ✅ Recursive Case:

Function calls itself with a **smaller version** of the problem.

---

## 🔁 Visual Flow for `factorial(3)`

```
factorial(3)
→ 3 * factorial(2)
   → 2 * factorial(1)
      → return 1
   → return 2 * 1 = 2
→ return 3 * 2 = 6
```

---

## 🔷 4. **Another Example: Fibonacci Series**

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 6;
    cout << "Fibonacci at position " << n << " is " << fibonacci(n) << endl;
    return 0;
}
```

🧾 Output:

```
Fibonacci at position 6 is 8
```

---

## ✅ When to Use Recursion?

| ✅ Good For                         | ❌ Not Recommended When               |
| ---------------------------------- | ------------------------------------ |
| Tree/graph problems                | Very large input (due to stack size) |
| Divide & conquer (e.g. merge sort) | When loops are faster and simpler    |

---

## 🔥 Pros & Cons

| Pros                     | Cons                         |
| ------------------------ | ---------------------------- |
| Cleaner, elegant code    | Slower due to function calls |
| Useful for complex logic | Risk of stack overflow       |

---

## ✅ Summary

| Concept            | Description                           |
| ------------------ | ------------------------------------- |
| Recursive Function | A function that calls itself          |
| Base Case          | Ends recursion to avoid infinite loop |
| Use Cases          | Factorial, Fibonacci, Sorting, Trees  |

---
---

# Lec-19

## Function Overloading with Examples:

## 🔷 What is Function Overloading?

> 📌 **Function overloading** means having **multiple functions with the same name**, but **different parameters**.

It helps you write **cleaner** and **more readable** code.

---

### ✅ Example (Basic):

```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!" << endl;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();               // calls greet()
    greet("Gajanan");      // calls greet(string)
    return 0;
}
```

🧾 Output:

```
Hello!  
Hello, Gajanan!
```

---

## 🔷 Rules for Overloading

You can overload functions by changing:

✅ Number of parameters
✅ Type of parameters
✅ Order of parameters (if types are different)

---

### ✅ Example 2: Add Function

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;       // calls int version
    cout << add(2.5f, 3.2f) << endl; // calls float version
    return 0;
}
```

🧾 Output:

```
8  
5.7
```

---

## 🔷 Why Use Function Overloading?

| ✅ Advantage                      | Example                       |
| -------------------------------- | ----------------------------- |
| Use same function name for logic | `add()`, `multiply()`         |
| Cleaner, easier to remember      | `print(int)`, `print(string)` |
| Helps with **polymorphism**      | (important in OOP)            |

---

## 🔴 What You **Cannot** Do:

You **cannot overload** based on:

* **Return type only**

```cpp
// ❌ Invalid: differs only by return type
int fun(int a);
float fun(int a); // ❌ error
```

---

## ✅ Summary Table

| Function Call     | Which Function Runs? |
| ----------------- | -------------------- |
| `add(5, 10)`      | `add(int, int)`      |
| `add(5.0f, 6.0f)` | `add(float, float)`  |
| `print("Hello")`  | `print(string)`      |

---

### 💡 Bonus Example: Area Function

```cpp
float area(float r) {
    return 3.14 * r * r;
}

int area(int l, int b) {
    return l * b;
}
```

📞 Call:

```cpp
area(5.0f);  // circle  
area(10, 4); // rectangle
```

---
---

# Lec-20

## Object Oriented Programming:

### Why OOOPs:
* C++ language was designed with the main intention of adding object-oriented features to C language.

* As the size of the program increases, readability, maintainability and bug-free nature of programs decreases.

* This was the major problem with languages like C which relied upon functions or procedures (hence the name procedural programming language)

* As a result, the possibility of not addressing the problem in an effective manner was high.Also, as data was almost neglected, data security was easily compromised.

* Using classes solves this problem by modelling program as a real world scenario





