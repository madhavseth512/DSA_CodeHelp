#include<iostream>
using namespace std;

//This is the code which proves that arrays when passed to other functions are passed by reference.
//This means that arrays when passed through functions, the functions didnt recieve a copy of enitre array instead it recieves the address of 1st
//element.


//Function for printing array and making some changes in it to check the concept of pass by reference
int change_Array(int brr[],int size)
{
    brr[0]=20;
    brr[1]=5;

    //printing the array
    cout<<"Array printed in the change_Array function is: ";
    for(int i=0;i<2;i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    int arr[2]={4,6};
    //when array is passed the size of the array is also passed to the function
    //because when you pass an array to a function, the array itself isn't actually copied or passed. Instead, the function receives 
    //a reference or pointer to the first element of the array. This reference tells the function where the array's data is located in memory.
    //REASONS   
    //1-In some language the arrays does not store the size information about the arrays data structure itself & when array is passed to 
    //the function the function only knows about the memory location of the 1st address and not the total number of elements

    //2-Knowing the size of the array prevents the funtion to iterate beyond the defined array in memory thus preventing any unexpected behaviour
    change_Array(arr,2);

    //printing the array here itself
    cout<<"Array printed in the main function is: ";
    for(int i=0;i<2;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}




