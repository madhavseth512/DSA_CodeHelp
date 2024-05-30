# Programming Fundamentals

## Algorithm 
Algorithm is set of steps to complete a particular task. We can represent an algorithm in two ways - <br>
**1. Flowchart** :  It is the graphical representation of Algorithm<br>
**2. Pseudocode** : It is a generic way to represent code/algo in textual formal i.e. a normal english representation of code.
<br>
<br>
![Flowchart Components](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/Basic-flowchart-symbols-template.png)
<br>
<br>
**Note -** ( % ) This is the modulus operator which gives the remainder.<br>
## How to write code in C++
```C++
#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello World\n";
    return 0; 
}
``` 
This is the most basic code snippet from C++ language. Explanation of its components are in the following image - <br>
<br>
![Explanation of Basic Syntax](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/image_123650291.JPG)
<br>
<br>
Now some of the basic implementation of C++ language is: <br>
```C++
#include<iostream>
using namespace std;
int main()
{
    //We can print two on the output window by these methods
    cout<<"2";
    cout<<'2';
    cout<<2;

    //How to add a new line in C++
    cout<<"Namaste Bharat\n"<<endl;
    // The below character enclosed in singlle quotes is called as new line character.
    cout<<'\n';

    //How to take input in C++
    int a;
    cin>>a;
}
```
<br>

## Data Types and Variables
**Data type** is which type of data we are going to store. A **Variable** is a named memory location.<br>
The categorization of data types is as follows -<br>
**1. Built-In/Primitive** - Int, Float, Void, Char, Double<br>
**2. Derived** - Arrays, Pointers, References<br>
**3. User Defined** - Structures, Unions, Classes, Enumerations<br>
Void reopresents the abscence of specific data type or lack of value. It suggests that a variable or function dosen't store any particulalr data value.<br>
<br>
![Data types with their size and ranges](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/C-Datatypes-Range-and-Sizes.png)<br>
<br>
**Variable naming conventions -** Variable names are case sensitive. Spaces are not alllowed in variable names. A variable name can be any legal identifier - an unlimited length sequence of Unicode letters and digits,beginning with a letter, the dollar sign ($) or the underscore(_).

## ASCII TABLE
ASCII defines a standard way to represent letters, numbers, symbols, and even control characters using these 0s and 1s.<br>
<br>
![ASCII TABLE](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/Screenshot_2024-05-30_193120.png)<br>
<br>
**Important Points -** <br> **1.** For Boolean data type the space allocated to it in the memory is of 1 byte. There is wastage of memory in this data type because it occupies the space of 1 bit. This is because the minimum addressable memory is of 1 byte.<br>
**2.** sizeof() operator - <br>
```C++
int main()
{
    //This would give us the size of variable in the memory
    int a=5;
    cout<<sizeof(a)<<endl;
}
```

**3.** For arthematic division - <br>
int/int = int , float/int = float , double/int = double , int / float = float<br>
**4.** The default value of uninitialized variable in C++ is undefined. <br>
**5.** const keyword is used to declare a consatnt variable in C++.<br>
**6.** Global variables can be accessed from anywhere in the program, while the local variable can be accessed within the scope they are declared.<br>
**7.** There are three types of errors in C++ -- Syntax Errors, Runtime Errors, Logical Errors.<br>
**8.** The constants in C++ are known as literals. But there is a difference between two. Literals are raw data values directly embedded in the code. Literals have no scope. All constants are initialized with literals but the reverse is not true. In x+5, 5 is a literal.<br>
Examples of Literals : 42,-1001, 3.14, -1.23e-5, 'a', '\n', "Hello World", true, false. These contains the examples of boolean literals, string literals, floating point literals, character literals.<br>
**9.** TypeCasting is the conversion of data type from one to another. **Implicit Typecasting** is the automatic typecasting done by the compiler. **Explicit Typecasting** is done manually by programmer or user.
```C++
float a = 5.7;
//Explicitly typecasting the variable a
float num = (int) a;
//This will print the output as 5.0000000
cout<<num<<endl
```
**10.** If in character variable a very large number is stored like 1024, then from the binary representation of 1024 the last 8 bits are copied to the character variable.
## Signed v/s Unsigned Numbers
**Signed numbers** can hold both positive and negative values. <br> **Unsigned numbers** can only store non-negative values (0 & +ve numbers). They utilize all the bits for numbers magnitude.<br>
In case of signed numbers a specific bit ( usually the **Most Significant Bit** ) is designated as **Sign Bit**<br>
Now if sign bit = 0 then the number is Positive, if sign bit = 1 then the number is Negative and here in case of signed numbers rest all other bits are used for storing magnitude of the number.<br>
<br>
![MSB&LSB Digramatic Representation]()
<br>

## How negative numbers are stored in the memory ?

Negative numbers have their sign bit as 1.<br>
For Example : -5<br>
1. Forget the negative sign<br>
2. Write the binary equivalent of the number<br>
3. Take its two's compliment.<br>

Ex - 5           = 0000................101<br>
1's compliment = 1111................010 (Flipping the bits of binary representation)<br>
2's compliment = 1111................011 (2's Compliment = 1's Compliment + 1)<br>
And when we have to read the number then we take the 2's compliment of the stored binary representation.<br>
## Precedence Table

|Category   | Operator | Associativity|
|----------|------------------|-------------|
|Postfix | () [] -> . ++ --| left to right|
|Unary        |+ - ! ~ ++ -- (type)* & sizeof                  |right to left              |
|Multiplicative        |* / %                  |left to right              |
|Additive        |+ -                  |left to right              |
|Shift        |<< >>                  |left to right              |
|Relational        |< <= > >=                  | left to right             |
|Equality        |== !=                  |left to right              |
|Bitwise AND        |&                  | left to right             |
|Bitwise XOR        |^                  |left to right              |
|Bitwise OR        | I                 |left to right              |
|Logical AND        |&&                |left to right              |
|Logical OR        | II                 | left to right             |
|Conditional        |?:                  |right to left              |
|Assignment        |+= -= *= /= %= >>= <<= &= ^= I=                  |right to left              |
|Comma        | ,                 | left to right             |
------------
<br>



























