#include<iostream>
using namespace std;

int main()
{
    //defined a 2-D Array
    int arr[4][4];

    cout<<"Enter the elements of the 2D array row wise\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            row_sum=row_sum+arr[i][j];
        }

        cout<<"The row sum for the "<<"row "<<i+1<<" is "<<row_sum<<endl;
        row_sum=0;
    }

    return 0;

}
 