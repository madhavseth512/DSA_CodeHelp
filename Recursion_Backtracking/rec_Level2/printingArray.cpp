#include<iostream>
using namespace std;

//Here we are printing an array with the help of recursion. In function call we need to pass the 
//array, size of the array and the iterator which is the replacement of (int i=0) part of the for loop.

void printArray(int array[], int size, int iterator)
{
    //base condition
    if(iterator==size)
        return;
    
    cout<<array[iterator]<<" ";
    //iterator++;  - can increment the iterator like this instead if incrementing while passing in the function
    
    //Also here if we would have written post-increment i.e. iterator++ while passing the function then 
    //our incremented value will never get copied bechause of the behaviour of post increment and we would 
    //end up making it an infinite loop. Post Increment - Same value gets copied while passing to the function and 
    //after passing the incrementation takes place. 
    printArray(array,size,++iterator);
}

int main()
{
    int array[]={1,4,5,7,8,9,24,0,14,53};
    int size = 10;
    int iterator=0;

    printArray(array,size,iterator);
    return 0;
}