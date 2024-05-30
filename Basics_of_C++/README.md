# Programming Fundamentals

### Algorithm 
Algorithm is set of steps to complete a particular task. We can represent an algorithm in two ways - <br>
**1. Flowchart** :  It is the graphical representation of Algorithm<br>
**2. Pseudocode** : It is a generic way to represent code/algo in textual formal i.e. a normal english representation of code.
<br>
<br>
![Flowchart Components](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/Basic-flowchart-symbols-template.png)
<br>
<br>
**Note -** ( % ) This is the modulus operator which gives the remainder.<br>
### How to write code in C++
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

### Data Types and Variables
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

### ASCII TABLE
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
**4.**






















