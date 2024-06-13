#include<iostream>
#include<vector>
using namespace std;

//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent,
// with the colors in the order red, white, and blue.

//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

void sortColors(vector<int>& nums) 
{
    for(int i=0;i<nums.size()-1;i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]>nums[j])
                swap(nums[i],nums[j]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array nums\n";
    cin >> n;

    vector <int> nums(n);
    cout<<"Enter the elements of nums array only 0,1,2s are allowed\n";

    for(int i=0;i<nums.size();i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);

    //printing the sorted array
    cout<<"The soorted array is"<<endl;
    for(int i=0;i<nums.size();i++)
    {
        cout<< nums[i]<<" ";
    }

    return 0;
}