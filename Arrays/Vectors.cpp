#include<iostream>
//header file for using and creating vector
#include<vector>
using namespace std;

//A vector a is data structure and it is basically same as an array like storing the data of same type 
//but it is dynamic in nature (unlike arrays which are of constant size) as it can grow and shrink in size as needed

int main()
{
    vector <int> arr;

    cout<<"Array size of arr initially is "<<arr.size()<<endl;  //Size is the total number of elements in this dynamic array
    cout<<"Array capacity of arr initially is "<<arr.capacity()<<endl;  //Capacity is the total space allocated to the dynamic array

    //adding the elements in the vector
    arr.push_back(4);
    arr.push_back(6);

    //printing the elements of vector
    cout<<"The elements of vector arr are ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //This removes the last element from the vector
    arr.pop_back();

    //When initialized like this the vector automaticallly gets implicitly initialized with 0
    vector <int> brr(10);
    cout<<"The elements of the vector brr are ";
    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;    

    int n;
    cout<<"Enter the initial capacity of vector crr"<<endl;
    cin>>n;

    //This created the vector of capacity n and initializes it with 4
    cout<<"We have initialized the vector crr with value of 4 : ";
    vector <int> crr(n,4);
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    //The empty function is to check wheather the vector holds any element or not
    cout<<"The vector brr is empty or not "<<brr.empty()<<endl;

    vector <int> drr;
    cout<<"The vector drr is empty or not "<<drr.empty()<<endl;

    return 0;

}
