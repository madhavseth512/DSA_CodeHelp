#include<iostream>
#include<vector>
using namespace std;

//In this code we print the array in a special format where the extremes in the array are printed

//The method we have used to solve this problem is called as two pointer approach as we have used pointers 
//called start and end which points to the elements of the array.

int extremePrint(vector <int> arr, int start , int end)
{
    while(start<=end)
    {
        if(start<end)
        {
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        else 
        cout<<arr[start]<<" ";

        start++;
        end--;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;

    vector <int> arr(n);
    cout<<"Enter the values in array\n";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    int start=0; //initially pointing to the first element of array
    int end=arr.size()-1; //initially pointing the last element of the array

    extremePrint(arr,start,end);

    return 0;
}