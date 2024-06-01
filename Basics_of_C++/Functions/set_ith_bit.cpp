#include<iostream>
#include<vector>
using namespace std;

//Another approach -  This can be the one approach for solving the problem, another shorter approach is by using bitwise OR directly 
//for changing the ith bit to set bit. We would also use left shift operator in this case. 


//here the method that we have used we can set the bits only from the binary representation and cant set the bits beyond the binary represenation

//In this function we convert the entered decimal number into its binary equivalent
int find_binary(int n, int i)
{
    vector <int> arr;
    int rem;
    int count = 1;
    while(n>0)
    {
        rem = n%2;
        n=n/2;
        arr.push_back(rem);
        count++;
    }

    cout<<"The binary representation of the entered number is ";
    //Here we are starting from the last index of the vector which is arr.size()-1 i.e. one less than  
    for(int j=arr.size()-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    //setting the ith bit to 1 
    arr[i]=1;

    cout<<"The binary representaion of after setting the ith bit is ";
    for(int j=arr.size()-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }

}

int main()
{
    int n;
    cout<<"Enter the number for which you want to set ith bit\n";
    cin >> n;

    int i;
    cout <<"Enter the value of i\n";
    cin >> i;

    find_binary(n,i);
}