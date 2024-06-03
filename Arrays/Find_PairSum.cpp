#include<iostream>
#include<vector>
using namespace std;

void checksum(vector <int> arr,int sum)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==sum)
                cout<<"The pair in the array is ("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;

    vector <int> arr(n);
    cout<<"Enter the elements of the array";
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    int sum;
    cout<<"Enter the sum which you want to check for\n";
    cin>>sum;

    checksum(arr,sum);

    return 0;
}
