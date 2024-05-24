#include<iostream>
using namespace std;

//Considering the simple case of when all the entered numbers are different and are of int data type
//Basic changes can be done accordingly considering the case 


int findMax(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else if (y>x && y>z)
        return y;
    else 
        return z;    
}

int main()
{
    int a,b,c;
    cout<<"Enter the value of three numbers a,b,c respectively\n";
    cin>>a>>b>>c;
    int maxNum = findMax(a,b,c);
    cout<<"The maximum number among the entered numbers is: "<<maxNum<<endl;
    return 0;
}