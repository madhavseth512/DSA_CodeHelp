//In this algorithm we have to find the missing number from the list of numbers entered from 1 to n
//Here we are considering that only one element is missing from the list
#include<iostream>
#include<vector>
using namespace std;

int find_missingnumber(vector <int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int error_index = -1;

    while(start<=end)
    {
        if(arr[mid]==1+mid)
        {   //if found equal then search in right
            start = mid+1;
        }

        else if(arr[mid]>1+mid)
        {
            //search in left when there is disbalence in index + 1 and actual value at index 
            end = mid-1;
            error_index = mid;
        }
    
        mid = start + (end-start)/2;
    }

    return  (arr[error_index]-1);
}

int main()
{
    int n;
    cout<<"Enter the number till which you want to count\n";
    cin >> n;
    vector <int> arr(n);

    cout<<"Start entering the values from 1\n";
    for(int i=0 ;i<arr.size();i++)
    {
        cin >> arr[i];
    }

    int result = find_missingnumber(arr);

    cout<<"The missing number in the counting from 1 to 11 is : "<<result;
    return 0;
}