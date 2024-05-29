#include<iostream>
//included the header file for the use of INT_MAX & INT_MIN
#include<limits.h>
using namespace std;

//here we can also make another function to find out the maximum number in an array

int main()
{
    int arr[]={2,4,1,6,8,9,0};
    int size=7;
    //Best practice is to initialize our variables with INT_MAX(largest possible value an integer can store) & INT_MIN (min value integer can store)
    int max_num=INT_MIN;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max_num)
            max_num=arr[i];
    }

    cout<<"The maximum number of the array is "<<max_num<<endl;
    return 0;
}