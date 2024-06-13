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
- For the iteration purposes in the cases like thord where we dont have enough information about number of rows then we should find another methods as done there to find that information.<br>

## Swap Function 
The C++ Standard Template Library (STL) provides a generic std::swap function that can be used to swap the values of variables of any data type that supports assignment. The std::swap function is more convenient, efficient, and type-safe for built-in data types and STL containers.<br>
```C++
//Its inclusion is necessary in case of custom data types and 
//non necessary for built-in data types.
#include <algorithm>

// Example usage
int a = 5, b = 10;
std::swap(a, b);
// Now a is 10 and b is 5

```
## 2D Array as Vector Equivalent
It is vector of vectors. The outer vector stores "vector < int >" type of data and inner vectors store int type of data.<br>

```C++
//declaration 
vector < vector <int> > arr;

//How to define the size of 2D Vector
//Through this code we have declared a 2D vector of 3 rows and 4 columns.
vector < vector <int> > arr(3, vector <int> (4));

//Initializing all the elements of vector at once
//Here all the elements of 3 row , 4 column vector is initialized with -1
vector < vector <int> > brr(3, vector <int> (4,-1));



// 3 rows and 4 columns is the size of vector thus we have 
//created three vectors each of size 4 (i.e. containing 4 elements)
//Not necessary here to fill all the elements for which you have allocated size.
//we can also push this -  vector <int> a{1,2};
vector <int> a{1,2,3,4};
vector <int> b{4,5,6,7};
vector <int> c{8,9,10,11}

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);


//Printing 2D Vector
//Here see how we have calculated the size for rows and columns 
//Row size is arr.size() which refers to number of elements in arr named 2D vector
//Column size is arr[0].size() which refers to the number of elements in 0th element i.e. 1st row of the 2D Vector
for(int i=0;i<arr.size(),i++)
{
	//Here writing like arr[0].size would work only in the case when all the rows have equal number of elements.
	//In another case when all rows do not have equal number of elements then we would write arr[i].size
	for(int j=0;j<arr[0].size();j++)
	{
		cout<<arr[i][j];
	}
}

```

## Vectors are passed by value to the function

**Vectors are indeed passed by value by default.** This means a copy of vector is created and passed to the function. Any changes within the function affect the copy and not the original vector.<br>
But we can achieve pass by reference for the vectors using the following syntax change - <br>

```C++
void modifyVecotr(vector<int>& vec)
{
	//modify elements of the vector
	//Changes would be done to the original vector
}
```
Using & before the original vector creates a reference to the original vector.