#include<iostream>
using namespace std;

int getSum(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the value of N\n";
    cin >>n;
    int sum = getSum(n);
    cout<<"The sum of even numbers upto N is "<<sum<<endl;
    return 0;
}