#include<iostream>
using namespace std;

//here we have coded the basic syntax for implementataion of arrays.

int main()
{
    //initialization of array
    int arr[5];  //in this case the array is initialized with garbage value

    //other ways to initialize arrays
    int brr[]={1,2,3,4};  //here an integer array of size 4 (20bytes) is created

    int crr[5]={5,4,5,6,1};  //if we would have given less values than 5 in curly braces then the non-initialized valued would get 
                             //assigned with the value 0.

    int drr[]={0};  //here we have initialized our whole array with 0                         


    cout<<"Enter the values in the array\n";
    
    //taking the input and storing it in array
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    //printing of the array and changing all values of array to 1
    cout<<"The modified array is : ";
    for(int j=0;j<5;j++)
    {
        arr[j]=1;
        cout<<arr[j]<<" ";
    }

    //how to find the address of an array - this would give us the base address
    cout<<endl<<arr<<endl;
    cout<<&arr<<endl;

    return 0;
}
    
