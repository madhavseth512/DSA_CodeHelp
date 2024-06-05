#include<iostream>
using namespace std;

//here we have used binary search to find the first occurence of any element in the array which is sorted in ascending order

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size-1;
    int result;
    //here it is better to use int mid = start + (end-start)/2 instead of this because 
    //in the way that we have written might face integer overflow problem if start and end
    //are very large integers near INT_MAX
    int mid =  (end+start)/2;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            //storing the index of number matched with target
            result = mid;
            end = mid -1;
        }

        else if (target > arr[mid])
        {
            start = mid +1;
        }

        else if (target < arr[mid])
        {
            end = mid -1 ;
        }
        
        //update the mid after every iteration 
        mid =  (end+start)/2;
    }

    cout<<"The first occurence of the target element is at the index "<<result;
}

int main()
{
    //here can also define vector to take desired array as input
    int arr[]= {1,2,4,6,6,8};
    int size = 10;
    int target;
    cout<<"Enter the target you want to find\n";
    cin>>target;

    binarySearch(arr,size,target);

    return 0;
}