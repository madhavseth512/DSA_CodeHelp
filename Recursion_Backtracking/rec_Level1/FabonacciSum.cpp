#include<iostream>
using namespace std;

// Fabonacci Series = 0,1,1,2,3,5,8,13.... 
// The first two elements of the series are 0 and 1 and consecutive elements are sum of the previous two elements

int getFab(int n)
{
    //base conditions
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    //reursive call
    int number = getFab(n-1) + getFab(n-2);

    return number;
}

int main()
{
    int n;
    cout<<"Enter the position till which you wanna get fabonacci sum starting from 0 position\n";
    cin >> n;

    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        int number = getFab(i);
        sum = sum + number;
    }
    cout<<"The sum of fabonacci series till entered position is "<<sum<<endl;     

    return 0;
}