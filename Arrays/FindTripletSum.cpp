#include<iostream>
#include<vector>
using namespace std;

//It is a code which asks you your array size and then the elements of the array and finally the target 
//Then as output it gives you all the triplets which sums upto the target.

int main()
{
    int n;
    cout<<"Enter the number of elements in your array\n";
    cin >> n;

    vector <int> arr(n);
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }
    
    int target;
    cout<<"Enter the target for which you want to find triplet\n";
    cin >> target;

    cout<<"The triplets from the array that add upto the target are\n";

    for(int i=0;i<arr.size()-2;i++)
    {
        for(int j=i+1;j<arr.size()-1;j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
        }
    }

    return 0;
}