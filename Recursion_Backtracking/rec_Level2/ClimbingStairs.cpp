#include<iostream>
using namespace std;

//Leetcode problem no 70
//Here we are given with a staircase consisting of n steps. At a time a person can take either 1 or 2 steps
//We have to find the total number of ways in which he can climb the staircase

//View it as no of ways to reach 0 or 1 from step n by taking either 1 or 2 steps at a time.
//Here in the base conditions for both 0 and 1 we have returned 1 because suppose we are on stair case 2 and we 
//took 2 steps downwards then when we would calculate climbStairs(0) then it is one of the many possible ways of climbing down
//and now the base condition should be applied as we have climbed down till bottom. Thus returned 1
//and in case of 1 - it is necessary to stop the recursive call and return 1 as one of many possible ways to climb down.

int climbStairs(int n)
{
    //base condition
    if(n==1 || n==0)
    {
        return 1;
    }

    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the total number of steps in staircase\n";
    cin >> n;

    int ways = climbStairs(n);
    cout<<"The number of ways to climb the stairs consisting of"<<  n <<" steps : "<<ways<<endl;
    return 0;
}