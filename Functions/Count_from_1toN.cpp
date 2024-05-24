#include<iostream>
using namespace std;

//here void function is used because we dont have to return anything from this function and only have to print 
//something
void printCount(int a)
{
    for(int i=1;i<=a;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{
    int n;
    cout <<"Enter number till which you want to count to"<<endl;
    cin>>n;
    printCount(n);
    return 0;
}