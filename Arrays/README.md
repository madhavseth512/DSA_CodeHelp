# Arrays
## Arrays basics covered in class 1 & class 2
 - What are arrays ?
 - Different ways to initialize arrays
 - What is index & how to access elements of an array ?
 - How to take input in an array and how to print an array ?
 - Printing address of an array gives the base address.
 - Passing array to a function is pass by reference.
 - We also have learnt to pass the information about size of the array along with the base address to a funciton.
 - Linear Search in arrays.
 - For Dynamic arrays we have learnt about vectors and various concepts related to it which are present in **Vectors.cpp** file.

 ## Array Decay

 Array decay is a concept in C and C++ that describes the **implicit conversion of an array name to a pointer to its first element** when it's passed to a function or used in certain contexts. In simpler terms, when you pass an array to a function, the array itself isn't actually copied or passed by value. Instead, the compiler decays the array to a pointer that points to the memory location of the first element in the array.<br>
 <br>
 **Consequences**<br>
 - **Loss of Size Information:** Since the function only receives a pointer, it loses information about the original array's size (number of elements). This can be problematic if the function needs to know the array size to iterate through it or access specific elements.
 - **Passing by Reference:** Array decay essentially makes arrays behave like they are passed by reference (modifying the original array) within the function. Any changes made to the elements using the pointer inside the function will affect the original array.

 It is because of this we need to pass the information about the size of the array


 ## Two-Dimensional Arrays

 A 2D array, also known as a two-dimensional array, is a data structure that **stores elements in a grid-like format** with rows and columns. It's essentially **an array of arrays**, where each inner array represents a row in the grid.<br>
 **Structure:**<br>

 - Imagine a table with rows and columns. Each cell in the table corresponds to an element in the 2D array.
 - To access an element, you need to specify two indices: one for the row and another for the column.

 When we have to visualize this 2-D array then we do it in the form of matirx / grid format but when we talk about how it is stored in the memory then it gets stored in the form of array of arrays where each inner array represents the row of the matrix.

 **NOTE - Here also the indexing starts from 0 and goes upto (no_of_rows-1) & (no_of_columns-1)**


 ```C++
 //This declares the 2-D Array with 100 rows and 100 columns
 int arr[100][100];

 //2-D Array for 50 rows and 60 columns
 int brr[50][60];

 //To access the elements from this 2-D array
 //Here also row and column indexing starts from 0
 int arr[row_index][column_index]

 //initialization
 int crr[3][3]={{1,2,3},{4,5,8},{9,10,5}};

 //taking input
 cin>>arr[row_index][column_index];

 //printing an element from the 2-D array
 cout<<arr[row_index][column_index];
 ```

<br>
There are two ways in which we can access the elements of the matrix/2-D array:<br>

- Row-wise access : Here we print all the elements of a row and then move to another row
- Column-wise access : Here we print all the elements of the column and then move to another column
<br>
<br>
**Using two nested loops we can do this.**

## Passing 2D Arrays to Functions

### Method 1 : 
To pass the information about both the number of rows and number of columns
```C++
#include <iostream> 
using namespace std; 

void printArr(int arr[3][2], int n, int m) 
{ 
    //lines of code
} 
int main() 
{ 
	const int n = 3, m = 2; 
	int arr[n][m] = { { 10, 15 }, { 20, 25 }, { 30, 35 } }; 

	// calling print function by passing array with row and 
	// column size 
	printArr(arr, n, m); 
	return 0; 
}

```
### Method 2 :
We can globally declare the number of rows and number of columns and then passing like - 
```C++
#include <iostream> 
using namespace std; 

// declaring global no of rows and cols 
const int n = 3, m = 2; 

// function to print an array 
void printArr(int arr[n][m]) 
{ 
    //Lines of Code
} 
int main() 
{ 

	int arr[n][m] = { { 10, 15 }, { 20, 25 }, { 30, 35 } }; 

	// calling print function 
    //Here we only pass the parameter arr and not row and collumn size
	printArr(arr); 
	return 0; 
}
```
### Method 3 :
When we have information about the column size only.
```C++
#include <iostream> 
using namespace std; 

// function to print an array 
void printArr(int arr[][2], int n, int m) 
{ 
    //Lines of Code
} 
int main() 
{ 

	int m = 2; 
	int arr[][2] 
		= { { 100, 105 }, { 120, 125 }, { 130, 135 } }; 

	// finding row size 
	int n = sizeof arr / sizeof arr[0]; 
	// calling print function 
	printArr(arr, n, m); 
	return 0; 
}
```
- **Error Scenario** - Here in the function declaration we have to note that when we are passing array like arr[ ][ ] then both of these brackets cant be empty else it will show us an error of - <br>
"Declaration of arr as multidimensional array must have bounds for all dimensions except the first"<br>
- The number of columns (or rows, depending on the language's memory layout) is crucial for the function to understand how many elements are present in each row and how to access them correctly.
- For the iteration purposes in the cases like thord where we dont have enough information about number of rows then we should find another methods as done there to find that information. 