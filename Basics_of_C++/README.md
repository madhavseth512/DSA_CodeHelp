# Programming Fundamentals

## Algorithm 
Algorithm is set of steps to complete a particular task. We can represent an algorithm in two ways - <br>
<br>
**1. Flowchart** :  It is the graphical representation of Algorithm
Components of Flowchart are as follows : 

-  Ellipse - Shows start/end of a program. It is called terminator.
- Parallelogram - Input/Output box, used for reading or printing something.
- Rectangle - Calculation/Process box, also used for initialization.
- Diamond/Kite - Decision making box
- Doubled Lined Rectangle - Represents a predefined process. A series of steps formally defined else where. 

**2. Pseudocode** : It is a generic way to represent code/algo in textual formal i.e. a normal english representation of code.
<br>
## How to write code in C++
```C++
//iostream is the header file in C++ STL that provides fundamental mechanism for performing input and output operations.
#include<iostream> 

//This line brings all the elements from the std into the current 
//scope so that we can use cout and cin directly without using the std:: prefix again and again
using namespace std; 

//execution starts from the main function
int main()
{
    cout<<"Hello World\n";
    return 0; 
}

// >> - Extraction Operator is used to read data from an input stream (like cin)
// << - Insertion Operator is used to write data to an output stream (like cout)
``` 
This is the most basic code snippet from C++ language. 
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
**Variable naming conventions -** Variable names are case sensitive. Spaces are not alllowed in variable names. A variable name can be any legal identifier - an unlimited length sequence of Unicode letters and digits,beginning with a letter, the dollar sign ($) or the underscore(_).<br>
## Important Points - <br>
 - For Boolean data type the space allocated to it in the memory is of 1 byte. There is wastage of memory in this data type because it occupies the space of 1 bit. This is because the minimum addressable memory is of 1 byte.<br>
- sizeof() operator - <br>
```C++
int main()
{
    //This would give us the size of variable in the memory
    int a=5;
    cout<<sizeof(a)<<endl;
}
```

- For arthematic division - <br>
int/int = int , float/int = float , double/int = double , int / float = float<br>
- The default value of uninitialized variable in C++ is undefined. <br>
- const keyword is used to declare a consatnt variable in C++.<br>
- Global variables can be accessed from anywhere in the program, while the local variable can be accessed within the scope they are declared.<br>
- There are three types of errors in C++ -- Syntax Errors, Runtime Errors, Logical Errors.<br>
- The constants in C++ are known as literals. But there is a difference between two. Literals are raw data values directly embedded in the code. Literals have no scope. All constants are initialized with literals but the reverse is not true. In x+5, 5 is a literal.<br>
Examples of Literals : 42,-1001, 3.14, -1.23e-5, 'a', '\n', "Hello World", true, false. These contains the examples of boolean literals, string literals, floating point literals, character literals.<br>
- TypeCasting is the conversion of data type from one to another. **Implicit Typecasting** is the automatic typecasting done by the compiler. **Explicit Typecasting** is done manually by programmer or user.
```C++
float a = 5.7;
//Explicitly typecasting the variable a
float num = (int) a;
//This will print the output as 5.0000000
cout<<num<<endl
```
- If in character variable a very large number is stored like 1024, then from the binary representation of 1024 the last 8 bits are copied to the character variable.
- Address of operator is used for printing the address of this variable.
```C++
int a =5;
cout<<"Address of a is : "<< &a << endll
```
- In the ASCII table, the value from [-128 to -1] in signed char is mapped to [128 to 255] in case of unsigned char. We can comprehend that (128 & -128) , (129 & -127), (130 & -126) exactly matches in binary representation this they will print exact same characters in the output stream.
<br>

## Signed v/s Unsigned Numbers

**Signed numbers** can hold both positive and negative values. <br> **Unsigned numbers** can only store non-negative values (0 & +ve numbers). They utilize all the bits for numbers magnitude.<br>
In case of signed numbers a specific bit ( usually the **Most Significant Bit** ) is designated as **Sign Bit**<br>
Now if sign bit = 0 then the number is Positive, if sign bit = 1 then the number is Negative and here in case of signed numbers rest all other bits are used for storing magnitude of the number.<br>
<br>

![MSB&LSB Digramatic Representation](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/MSB-LSB.png)

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

## Operators, Conditionals & Loops

```C++
//CONDITIONALS
    if(condition)
    {
        //statements;
    }
    else
        //statements;

    //LOOPS
    //FOR LOOP
    for(int i=0;i<5;i++)
    {
        cout<<i;
    }

    //We can also write for loop in this way
    int i=0;
    for(;;)
    {
        if(i<5)
        {
            cout<<i;
        }
        i++;
    }
```
<br>

**Operators** are categorized into these types - <br>
1. Arthematic : + - / * % (Modulus operator which gives us remainder)
2. Relational : > < >= <= != ==
3. Assignment : =
4. Logical    : && || !
5. Bitwise : <br>
The bitwise operators are : AND(&), OR(|), NOT(~), XOR(^)<br>

|a|b|XOR|
|----|----|---|
| 0      |  0   |  0    |
|   0    |  1   |  1    |
|1       | 0    |   1   |
|   1    |  1   |   0   |

In case of XOR we woould get output as zero only when both of the bits are same<br>


### Left Shift & Right Shift Operator

LEFT SHIFT OPERATOR
```C++
int a=1;
// a=1 - 000.......001 (Binary representation)
a=a<<1;
// a=2 - 000.......010 (Bits are left shifted by one place)
a=a<<1;
// a=4 - 000.......100 
```
- When we left shift we actually multiply the number by 2<br>
- Left shifting an operand by negative value results in undefined behaviour in most programming language thus they pring a garbage value.<br>
- Left shifting a negative number by 1 is equivalent of multiplying it by 2. Left shifting -24 would give the output as -48. <br>

RIGHT SHIFT OPERATOR
```C++
int a=8;
// a=8 - 000..........01000 (Binary representation)
a=a>>1;
// a=4 - 000..........00100 (Bits are right shifted by one place)
a=a>>1;
// a=2 - 000..........00010
```
- We cant directly say that right shifting a number by 1 is equivalent of dividing the number by 2. We can say that in case of positive integers.
- For the case of negative numbers, in most programming languages, right shifting by 1 is not equivalent to simply dividing it by two becasue of how negative numbers are stored in the memory.
- When we right shift the number by 1 then bits are shifted one position to the right. The vacated left most bit is filled with the copy of original sign bit which is 1 in this case. The final answer is then read by taking two's compliment.<br>

### Switch-Case Statement

```C++
switch(expression)
{
    case value1 : //code to execute if expression == value1
        break;
    case value2 : //code to execute if expression == value2
        break;
    //...more cases
    default : 
        //code to execute if none of the above cases match.
}
```

- For expression only integer/characters are allowed. Floating point numbers are not allowed.
- Each case clause can hold values of same data type as expression.
- If a break; is omitted then the code will execute the next case even if its case condition dosent hold.
<br>

### Important Points to be noted :

- BREAK KEYWORD - It terminates the loop entirely once encountered.<br>
- CONTINUE KEYWORD - This statement skips the remaining part of the current iteration of the loop and jumps directly to the beginning of next iteration. We cant use continue keyword in Switch-Case Statement.<br>
- In do-while loop we execute the body of the loop before testing the condition.
- COMMA OPERATOR EXAMPLES - 

```C++
int a=5,b=6,c,d;
c=a,b;  //Here a is stored in c because of seperator
d=(a,b);  //b is stored in d because of the breacket
cout<<c<<d;

//The output here would be c=5 & d=6 .
```

```C++
int i,j;
j=10;
i=(j++,j+100,j+999);
cout<<i;

//Here the answer is 1010. j starts with the value 10. j is then incremented to 11.
//Next j is added to 100 and then to 999 which yeilds the result as 1010.
```

```C++
int a=-5;
int k=(a++,++a);
cout<<k;

//here the answer is -3
```

- TERNARY OPERATOR -  Syntax : (Condition) ? (Expression_if_true) : (Expression_if_false)
- Floating point numbers sometimes loose precision and can sometimes result in undesired output. This happens because decimal values do not have exact binary representation. This is a side effect of how CPU represents floating point data.

- Some sample codes -
```C++
#include<iostream>
using namespace std;

//C++ allows us to define a prototype of function where we are
//not req to give variable names and only the default values
int fun(int =0, int=0);

int main()
{
    cout<<fun(5);
    return 0;
}

//While in the function definition we can provide the variable names corres. to each parameter.
int fun(int x,int y)
{
    return (x+y);
}
```
```C++
//Here in this example we have to note that the output is 6 -6 0 1. The value of c is 0 because c is 
//not preincremented because of the concept of short circuit evaluation which states 
//that once the overall result is determined the execution stops.
int a=5,b=-7,c=0,d;
d= ++a && ++b || ++c; //here  (1 || any thing ) would give 1 as output
cout<<a<<b<<c<<d;
```
```C++
int x=97;
int y= sizeof(x++);
cout<<x; //The output here is 97 because the operator only evaluated to determine only the data type.
```
## FUNCTIONS
```C++
//Basic syntax of Function
Return_Type Function_Name (Input Parameters)
{
    //Lines of Code
}

int main()
{
    return 0;
}
```
- We cant create two main functions in our program.
- Returning 0 from the main function is the standerd way to signal successful program execution.
- Non zero values can be used to indicate errors, but their meaning depends on the specific program implementation.
- Some lannguages allow omitting the return 0; in that case the compiler implicitly returns 0, assuming successful execution.
- The value returned by the main function becomes the program exit code. This code is communicated back to the O.S. or the shell that initiated the program.
- Return keyword : The primary function of return is to terminate the execution of current function and return the control to the calling function. This return function can optionally be used to return a value from a function.
### Function Order - 
The function should atleast be declared before they are called. 
```C++
#include<iostream>
using namespace std;

//This is the function declaration.
int add(int x, int y);

int main()
{
    //funciton called within the main function
    add();
}

//This is the function declaration + definition
int add(int x,int y)
{
    //lines of code
}
``` 
### Function Call Stack - 
**LIFO** - Last In First Out data structure that keeps track of active function calls in a program.<br>
Here is a breakdown of how the function call stack works: <br>

- **Function Calls** : Whenever a function is called in your program a new entry ( called an activation record ) is pushed onto the stack. This activation record stores the information specific to the funtion call, such as Local Variables, Parameters Passed, Return Address. 
-  **Function Execution** : Control jumps to the function that was just called. This function executes its code according to the info stored in activation recored.
- **Nested Function Calls** : If a function calls another function from within itself, a new activation record for the nested function is pushed onto the stack on top of the previous funciton record. This creates a stack of function calls.
- **Function Returns** : When a function completes its execution, it typically uses a return statement. This pops the function's activation record from the top of the stock. The program control then returns to the address stored in the return address of that activation record.
- **Stack Management** : The fucntion call stack is managed automatically by the operating system or the program itself. The size of the stack can be limited, so its important to avoid excessive recursion that can lead to a stack overflow error.

### Pass by Value Concept -
```C++
#include<iostream>
using namespace std;

int print_Num(int n)
{
    n++;
    cout<<"The value of n printed by the print_Num function is "<< n << endl;
    return n;
}

int main()
{
    int a =5;
    cout<<"The initial value of a is :"<< a <<endl;
    int return_var = print_Num(a);
    cout<<"The value returned by the function to main function is "<< return_var << endl;
    cout<<"The final value of a is "<< a <<endl; 
}
```
















