#include<iostream>
using namespace std;


//we are only able to get the correct output only for the input from 1-12 because after that the int variable cant score because 
//int has a limited range of value to store and for greater value it will most likely overflow.

int getFactorial(int num)
{
    int fact=1;
    while(num>1)
    {
        fact=fact*num;
        num = num -1;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter the number of which you want to find factorial\n";
    cin>>n;
    int factorial = getFactorial(n);
    cout<<"The factorial is "<<factorial<<endl;
    return 0;
}