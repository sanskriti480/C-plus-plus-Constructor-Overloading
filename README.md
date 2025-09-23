# C++ Experiment 13: Constructor Overloading

---

## Aim  
- To study and implement **Constructor Overloading** in C++.  
- To understand how a class can have **multiple constructors** with different parameters.  
- To explore **default, parameterized, and copy constructors**.  
- To demonstrate object initialization in **different ways** using constructor overloading.  
- To observe the behavior of constructors in **inheritance and object copying**.

---

## Apparatus / Tools Used  
- **VS Code**  
- **Programiz Online C++ Compiler**  

---

## Objectives  

- To understand **constructor overloading** as a feature of C++ OOP.  
- To implement multiple constructors in a single class.  
- To differentiate between **default, parameterized, and copy constructors**.  
- To explore **constructor behavior during object creation**.  
- To study **copy constructor nuances** when passing objects.  
- To analyze **advantages and limitations** of constructor overloading.  
- To apply constructor overloading in **real-world scenarios** like object initialization and resource management.  

---

## Theory  
---

### What is Constructor Overloading?  
- Constructor overloading allows a class to have **more than one constructor** with the same name but **different parameter lists**.  
- This helps initialize objects in **different ways** depending on the available data.  
- Overloading is determined by **number or type of parameters**, **not by return type**.  

---

### Types of Constructors Used in Overloading 
---

1. **Default Constructor**  
   - No parameters.  
   - Initializes objects with default values.  
   - Example: `fetch() { a = 3; b = 4; }`  

2. **Parameterized Constructor**  
   - Takes one or more arguments.  
   - Allows initialization with user-defined values.  
   - Example: `fetch(int m, int n) { a = m; b = n; }`  

3. **Copy Constructor**  
   - Initializes an object by copying another object.  
   - Syntax: `fetch(const fetch &obj)`  
   - Useful for **object duplication**, **pass-by-value**, and **returning objects**.  

---

### Rules for Constructor Overloading  
---

- All constructors must have **same name as class**.  
- Must have **different parameter lists**.  
- Return type **cannot differentiate** constructors.  
- Copy constructor is a **special constructor** used when object is copied.  
- Overloaded constructors can have **default arguments**, but avoid ambiguity.  
- If no constructors are defined, the compiler provides a **default constructor automatically**.  

---

### Key Concepts  
---

- **Base Case**: Object creation using default values.  
- **Parameterized Case**: Object creation with specific values.  
- **Copy Case**: Object creation by duplicating an existing object.  
- **Constructor Selection**: Compiler chooses the constructor based on arguments provided during object creation.  
- **Constructor in Inheritance**:  
  - Base class constructor is called **before derived class constructor**.  
  - Overloading applies separately in derived classes.  
- **Dynamic Memory Management**: Constructors initialize resources; copy constructors ensure safe object duplication.  

---

### Advantages of Constructor Overloading  
---

- **Flexibility**: Initialize objects in multiple ways.  
- **Code Reusability**: Avoid writing separate initialization functions.  
- **Readability**: Cleaner and structured object initialization.  
- **Supports OOP Principles**: Helps encapsulation and object lifecycle management.  
- **Reduces Errors**: Proper initialization reduces runtime errors.  
- **Supports Inheritance**: Base class constructors can be overloaded for flexibility.  

---

### Disadvantages of Constructor Overloading  
---

- Excessive overloading may **increase complexity**.  
- Can cause **ambiguity** if parameter lists are too similar.  
- Misuse may lead to **unexpected constructor calls**.  
- Cannot rely on return type for differentiating constructors.  

---

### Applications of Constructor Overloading  
---

- **Banking Systems**: Initialize accounts with default or custom values.  
- **Games**: Create characters with default stats or customized attributes.  
- **Real-Time Systems**: Initialize sensors or devices differently depending on input.  
- **Data Structures**: Initialize nodes with default or specific values in trees, lists, graphs.  
- **File Management**: Initialize file objects with default path or user-defined path.  
- **Mathematical Modeling**: Different constructors for equations, matrices, or vectors.  

---

### Operation overloading
---

### **Definition**: Giving special meaning to existing C++ operators for user-defined types.

### **Key Features**:
- Implements polymorphism for operators.
- Overloaded operators are essentially functions.
- Improves readability by making objects behave like built-in types.

### **Operators that can be Overloaded**:
---
- Arithmetic: +, -, *, /, %
- Relational: <, >, ==, !=
- Logical: &&, ||, !
- Assignment: =, +=, -=
- Increment/Decrement: ++, --
- Input/Output: >>, <<
---

### **Operators that cannot be Overloaded**:
---
- :: (scope resolution)
- . (member access)
- .* (member pointer access)
- ?: (ternary operator)
- sizeof, typeid
---

### **Rules**:
---
- At least one operand must be a user-defined type.
- Cannot create new operators, only redefine existing ones.
- Operator precedence and associativity cannot be changed.
- Overloaded operators can be member functions or friend functions.
---

### **Advantages**:
---
- Makes code intuitive and easy to read.
- Allows objects to be manipulated naturally.
- Enhances OOP design.
---

### **Disadvantages**:
---
- Can make code confusing if overused.
- Misuse may lead to unexpected behavior.
- Cannot overload all operators.
---

### **Applications**:
---
- Complex numbers (+ to add complex objects).
- Strings (+ for concatenation).
- Vectors/Matrix classes (* for multiplication).
- File handling (<< and >> for input/output).

---

### Function overloading
---

### Definition: 
Two or more functions having the same name but different parameter lists.

### Key Features:
---
- Determined at compile-time (static polymorphism).
- Function signatures must differ in number or type of arguments.
- Return type alone cannot differentiate functions.

---

### Rules:
---
- Must differ in parameter type/number.
- Default arguments should be used carefully (can cause ambiguity).
- Functions can be overloaded across base and derived classes.

---

### Advantages:
---
- Improves code readability.
- Eliminates need for multiple function names.
- Supports polymorphism.
- Reusable and clean design.

---

### Disadvantages:
---
- Overuse may lead to confusing code.
- Ambiguity with default arguments.
- Compiler errors can be tricky to debug.

---

### Applications:
---
- Mathematical functions (e.g., add(int,int), add(double,double)).
- Real-world systems where different data types need the same operation.
- Printing or displaying objects differently.

---

## Algorithm
---

### Program 1 : Function overloading

1. Start the program.
2. Define a function calc with two integer parameters (int a, int b):
   - Calculate the sum: sum = a + b.
   - Print the sum.
3. Define another function calc with three integer parameters (int a, int b, int c):
   - Calculate the difference: difference = a - b - c.
   - Print the difference.
4. In main() function:
   - Call calc(10, 20) → this will use the 2-parameter version of calc.
   - Call calc(20, 10, 5) → this will use the 3-parameter version of calc.
5. End program.

### Program 2

1. Start the program.
2. Create a class Add with a private data member sum of type double.
3. Define two constructors in the class Add:
   - Constructor 1 → Add(int a, int b, int c)
      - Calculates the sum: sum = a + b + c.
      - Prints the sum as "Sum (double) = ...".
   - Constructor 2 → Add(int a, int b)
      - Calculates the sum: sum = a + b.
      - Prints the sum as "Sum (int) = ...".
4. In the main() function:
    - Create an object A1 of class Add with three integers (5900000, 60000000, 10) → calls 3-parameter constructor.
    - Create an object A2 of class Add with two integers (5, 10) → calls 2-parameter constructor.
5. The constructors automatically execute during object creation and display the respective sum.
6. End program.

### Program 3

1. Start the program.
2. Create a class Name with a private data member sum (though not used in this example).
3. Define two constructors in the class Name:
    - Constructor 1 → Name(char A, char B)
        - Prints the two characters A and B.
    - Constructor 2 → Name(string a, string b)
        - Concatenates the two strings a and b.
        - Prints the concatenated result.
4. In the main() function:
    - Create an object A1 of class Name with two characters ('A', 'B') → calls char constructor.
    - Create an object A2 of class Name with two strings ("Sanskriti", "Khairnar") → calls string constructor.
5. The constructors automatically execute during object creation and display the respective output.
6. End program.

### Operator

1. Start program.
2. Define class ComplexAddition with:
   - Data members: real, imag.
   - Constructor to initialize values and display them.
   - Function add(int A, int B) to display the result.
3. In main():
   - Create two objects A1(3,2) and A2(8,5).
   - Add real parts → fl = A1.real + A2.real.
   - Add imaginary parts → fli = A1.imag + A2.imag.
   - Call A1.add(fl, fli) to display the sum.
4. End program.

### Operator 2

1. Start program.
2. Define class Name with:
   - Data members: name1, name2.
   - Constructor to initialize both strings.
   - Function add() to concatenate and display name1 + name2.
3. In main():
   - Create object N1("Sanskriti", "Khairnar").
   - Call N1.add() to display the concatenated name.
4. End program.

---

### Concepts used 
---

- Constructor Overloading
- Default, Parameterized, Copy Constructors
- Object initialization flexibility
- Constructor selection by compiler
- OOP principles: Encapsulation, Object Lifecycle, Inheritance

---

### Conclusion 
---

- Constructor overloading enables flexible and safe object initialization.
- Multiple constructors allow default, parameterized, and copy initialization.
- Reduces code duplication and improves readability and maintainability.
- Supports OOP principles by properly managing object lifecycles.
- Helps in real-world applications where different initialization scenarios are needed.

---
