//PROBLEM STATEMENT - 
//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
//You must solve the problem without modifying the array nums and uses only constant extra space.
//All the integers in nums appear only once except for precisely one integer which appears two or more times.

//SOLUTIONS - 
// 1-- We cant do this by calculating sum of all numbers and then substract from it the sum of A.P. from 1 to n.
// 2-- We can iteratively traverse the loop but it was giving TLE on leetcode
// 3-- We can sort the array and then we can very easily check which element is repeating just by traversing the loop
// 4-- According to the number on an index we can go to that index and then mark it as negative element. If we go to a
//     element twice then that is our answer.
// 5-- We will stay at the first index and then swap the number at index =0  with the number at index == number. We do this 
//     till the number of loops reaches n. Now the number finally at index == 0 is our answer

//This is the approach 5th
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> array = {1,3,4,1,2}; 
    int index = 0;
    for(int i=0;i<array.size();i++){
        swap(array[index],array[array[0]]);
    }

    cout<<"The duplicate element is "<<array[index];
    return 0;
}