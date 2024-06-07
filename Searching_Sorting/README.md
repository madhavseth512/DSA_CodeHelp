# Searching & Sorting
 We have learnt abut linear search algorithm which traverses all the elements and has a time complexity of O(n) for arrays where n is the number of elements in the array. Same algorithm has time complexity of O(m*n) in case of 2-D Arrays where m is number of rows and n is number of columns.<br>

 ## Binary Search
 Binary search is a search algorithm that excels at finding elements in **sorted arrays**. It works by repeatedly halving the search interval until the target element is found or the element is determined to be not present.<br> 

 **Key Points**
  
  - Binary Search works only on sorted arrays. If the array is not sorted, the algorithm will provode incorrect results.
  - With each iteration, binary search eliminates half of the remaining search space, making it significantly faster than linear search for large datasets.

  **Time Complexity**<br>
  The time complexity of binary search is O(log n), where n is the number of elements in the array. This logarithmic complexity signifies that the search time grows much slower than the size of the array, making it efficient for large datasets.<br>
  
  ## Binary Search in STL

  C++ Standard Template Library offers a predefined function for binary search<br>
  ```C++
  #include<iostream>
  #include<vector>
  //This algorithm header file contains the implementation of binary search
  #include<algorithm>
  using namespace std;

  int main()
  {
    vector <int> numbers{1,2,3,4,5,7,12,43};
    int target;
    cout<<"Enter target"<<endl;
    cin>>target;

    //Binary search STL function
    if(binary_search(numbers.begin(),numbers.end(),target))
    {
        cout<<"Found the target\n";
    }
    else 
        cout<<"Not found the target\n";

    int arr[]= {2,3,4,5,8,10,14,19};
    int size = 8;
    int target2;
    cout<<"Enter the target 2\n";
    cin >> target2;

    bool flag = binary_search(arr,arr+size,target2);
    
    //If the element is found or not its result is stored in flag variable
    return 0;
  }
  ``` 
## Binary Search in 2D Array
When we are applying the binary search in 2D array then we visualize it in the form of 1D array (array of arrays) 

## Selection Sort
- Selection sort is a sorting algorithm that works by repeatedly finding the minimum (or maximum) element from an unsorted list and placing it in its correct position at the beginning (or end) of the list. <br> 
- The time complexity of selection sort is O(n^2), which means the sorting time increases quadratically with the number of elements (n) in the list.

![Selection_Sort_GIF](https://github.com/madhavseth512/DSA_CodeHelp/blob/main/Images/sortingaction.gif) <br>
<br>


