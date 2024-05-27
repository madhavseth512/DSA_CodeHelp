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
    change_Array(arr,2);

    //printing the array here itself
    cout<<"Array printed in the main function is: ";
    for(int i=0;i<2;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}




