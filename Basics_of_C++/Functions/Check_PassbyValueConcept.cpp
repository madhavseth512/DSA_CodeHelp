#include<iostream>
using namespace std;

int print_Num(int n)
{
    n++;
    cout<<"The value of n printed by the print_Num function is "<< n << endl;
    return n;
}

int main()
{
    int a =5;
    cout<<"The initial value of a is :"<< a <<endl;
    int return_var = print_Num(a);
    cout<<"The value returned by the function to main function is "<< return_var << endl;
    cout<<"The final value of a is "<< a <<endl; 
    return 0;
}