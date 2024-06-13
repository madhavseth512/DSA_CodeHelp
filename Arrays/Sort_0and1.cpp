#include<iostream>
#include<vector>
using namespace std;

//Here we are taking the input of size of the array and the array elements which are 0 and 1 
//Then as output we are returning the sorted array with all 0s together on left and then all 1s 

int main()
{
    int n;
    cout<<"Enter the size of your array\n";
    cin >> n;
    vector <int> arr(n);
    cout<<"Enter the elements of the array\n";

    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }

    int i=0;
    int j=arr.size()-1;

    while(i<=j)
    {
        if(arr[i]==0 && arr[j]==1)
        {
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0 && arr[j]==0)
        {
            i++;
        }
        else 
            j--;
    }

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

