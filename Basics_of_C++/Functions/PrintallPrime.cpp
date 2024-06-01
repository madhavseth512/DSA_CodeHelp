#include<iostream>
using namespace std;

int check_Prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if((n%i)==0)
            //returning 0 if the number is not prime
            return 0;  
    }
    //returning 1 when the number is prime
    return 1;
}

int main()
{
    int n;
    cout<<"Enter the number till which you want prime\n";
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        int ans = check_Prime(i);
        if(ans)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}