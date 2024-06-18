// Here we will do binary search in a sorted array using recursion
//we are given a key and an array. We have to give output if we have found the key in the array or not
//If we have found the key then we have to return its index also

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector <int> number,int key,int start, int end, int mid)
{
    //base condition
    if(start>end)
        return -1;
    
    if(number[mid]==key)
    {
        return mid;
    }
    else if (number[mid]>key)
    {
        end = mid - 1;
    }
    else 
        start = mid + 1;

    mid = start + (end-start)/2;
    //recursive call
    int ans = binarySearch(number, key, start, end, mid);
    
    return ans;
}   

int main()
{
    vector <int> number = {10,20,30,40,50,60,70,80,90};
    int key;
    cout<<"Enter the number which you want to find in the array\n";
    cin >> key;

    int start = 0;
    int end = number.size()-1;
    int mid = start + (end-start)/2; 
    int value = binarySearch(number,key,start,end,mid);

    if(value>=0 && value<number.size())
    {
        cout<<"The key is found at index "<<value<<endl;
    }
    else 
        cout<<"The key is not found\n";
    return 0;
}