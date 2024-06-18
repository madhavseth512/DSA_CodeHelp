// In this problem we have to check if the array is sorted in ascending order or not ?
// Here we dont have to pass the iterator always we can also use the array pointer for traversing the loop

#include<iostream>
using namespace std;

int checkArray(int array[], int size, int i, int& errorFound)
{
    //base condition
    if(i==size-1)
        return errorFound;
    
    //recursive call
    if(array[i]<=array[i+1])
    {
        i++;
        checkArray(array,size,i,errorFound);
    }
    else 
        errorFound=1;
}

int main()
{
    int array[]={1,3,5,13,38,65};
    int size = 6;
    int i = 0;
    //This variable shows if we have found the a pair which is in ascending order or not 
    int errorFound = 0;
    checkArray(array,size,i,errorFound);
    
    if(errorFound)
        cout<<"Array is not sorted";
    else    
        cout<<"Array is sorted";
    
    return 0;
}
