# OOPS (Object Oriented Programming)

Object-oriented programming (OOP) is a way of designing computer programs by creating  objects that represent things in the real world. These objects can be anything from a car to a bank account to a user on a website. <br>

An object is indeed an **instance** of a class.  Here's a deeper explanation of the relationship:

* **Class as a Blueprint:**  Think of a class as a blueprint or template.  This blueprint defines the characteristics (properties) and functionalities (methods) that all similar objects will have.  For instance, a class called `Car` might define properties like color, model, and number of wheels. It could also define methods like `startEngine`, `accelerate`, and `brake`.

* **Object as a Specific Example:** An object is a concrete instance created from a class blueprint.  So, you might create an object called `myCar` which is an instance of the `Car` class.  This `myCar` object would have its own specific values for the properties defined in the `Car` class (e.g., `myCar` might be a red Honda Civic). It would also have access to the methods defined in the `Car` class (you could use `myCar.startEngine()` to start the car).

* **Multiple Objects from One Class:**  The beauty of classes is that you can create many objects from a single class definition.  So, you could have another object `yourCar` which is also an instance of the `Car` class, but with different properties (e.g., `yourCar` might be a blue Toyota Camry). 

In essence, a class provides the general definition, and objects are the specific instances that bring that definition to life.
<br>
<br>
**SYNTAX-** <br>
```C++
#include<iostream>
using namespace std;

class animal
{
    int age;
    int weight;
    char name;
};

int main()
{
    cout<<"The size of annimal class is "<<sizeof(animal); 
}
```
Here for defining the class we have to put a semicolon after the curly braces. Also notice that this program gives the output of 12 instead of 9 in the sizeof( ) operator.<br>
The reason behind the sizeof operator returning 12 for our class despite having only two int and one char member. +
This happened because of padding and memory alignment.<br>
<br>

**NOTE-**

- **Data Members-** These are variables declared within a class that hold the data (or attributes) specific to an object of that class. They represent the characteristics or state of an object. 

- **Member Functions-** Member functions are functions defined within a class that operate on the data members of the class. They define the actions or behaviors that an object can perform.

## Padding

In object-oriented programming, compilers often add extra bytes (padding) between members in a class to optimize memory access. This is because processors typically work more efficiently when data is aligned on specific boundaries (often a multiple of 4 bytes). <br>
In our case we have class named as animal which contains 2 int data type and 1 char data type. Compiler here adds 3 bytes extra after the char data type making the class size 12.


## Memory Alignment

Memory alignment refers to the way data is arranged in memory relative to specific boundaries (often a multiple of the processor's word size). This ensures efficient access by the processor, as it can typically fetch data in larger chunks aligned to those boundaries.


## Access Modifiers 
