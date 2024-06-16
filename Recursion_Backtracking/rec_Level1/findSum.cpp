#include<iostream>
using namespace std;

int getSum(int n)
{
    //base condition
    if(n==1)
        return 1;
    
    //recursive call
    int ans = n+getSum(n-1);

}

int main()
{
    int n;
    cout<<"Enter the number till which you want to find sum\n";
    cin >> n;

    int sum = getSum(n);
    cout<<"The sum of the numbers from 1 to "<<n<<" is "<<sum<<endl;
    return 0;

}