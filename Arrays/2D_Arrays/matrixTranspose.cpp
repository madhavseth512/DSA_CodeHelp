#include<iostream>
using namespace std;
int main()
{
    //defined a 4x4 matrix
    int arr[4][4];

    //taking input in the matrix
    cout<<"Enter the elements of the 2D array row wise\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<"The transposed matrix is\n";

    //printing the transposed matrix
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //here the elements are printed column wise in row format 
            //which gives the output result as transposed matrix
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

//ANOTHER CODES FOR 2D ARRAYS INCLUDE - SEARCHING FOR A PARTICULAR ELEMENT & FINDING MAX , MIN IN THE 2D ARRAY