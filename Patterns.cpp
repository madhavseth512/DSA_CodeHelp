#include<iostream>
using namespace std;

int main()
{
    //numeric hollow inverted half pyramid
    int pyrmd_dimenions;
    cin >> pyrmd_dimenions;
    int column_length;
    column_length = pyrmd_dimenions;
    for (int i=0;i<pyrmd_dimenions;i++)
    {
        for (int j=0;j<column_length;j++)
        {
            if(i==0 || j==0 || (j == column_length-1)){
                cout << i+j+1<<" ";
            }
            else cout << "  ";
        }
        column_length--;        
        cout << endl;
    }

    //numeric full pyramid pattern printing 

    int row_num;
    cin >> row_num;
    for (int i = 0; i< row_num ; i++)
    {
        for (int j = 0 ; j < row_num-i-1 ; j++)
        {
            cout << " ";
        }
        for(int k = 0 ; k < i+1 ; k++)
        { 
            cout << i+k+1;
        }
        for (int l = 0 ; l < i ; l++ )
        {
            cout << 2*(i)-l;
        }
        for (int m = 0 ; m < row_num-i-1 ; m++)
        {
            cout << " ";
        }        
        cout << endl;
    }

    //non numeric (stars only) hollow full pyramid pattern -- incomplete code 
    int row_num;
    cin >> row_num;
    for (int i = 0 ; i <row_num ; i++)
    {
        for (int j=0 ; j<row_num-i-1;j++ )
        {
            cout << " ";
        }
        cout << "*";
        for (int k=0;k<(2*i-1);k++)
        {
            
        }
    }

    //half pyramid (stars only)
    int row_num;
    cin >> row_num;
    for (int i = 0 ; i< row_num ; i++)
    {
        for (int j=0 ; j< i+1 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //inverted half pyramid (stars only)
    int row_num;
    cin >> row_num;
    for (int i = 0 ; i< row_num ; i++)
    {
        for (int j=0 ; j< row_num -i  ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //numeric half pyramid 
    int row_num;
    cin >> row_num;
    for (int i=0; i< row_num ; i++)
    {
        for (int j=0; j < i+1 ; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }

    //inverted humeric half pyramid 
    int row_num;
    cin >> row_num;
    for (int i=0; i< row_num  ; i++)
    {
        for (int j=0; j < row_num -i ; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }

    //full pyramid (stars only)
    int row_num;
    cin >> row_num;
    for (int i=0 ; i<row_num ; i++)
    {
        for (int j = 0; j < row_num - i-1 ; j++)
        {
            cout << " ";
        }
        for (int l =0; l <i+1;l++)
        {
            cout << "* ";
        }
        cout <<endl;
    }

    //inverted full pyramid (stars only)
    int row_num;
    cin >> row_num;
    for (int i=0 ; i<row_num ; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int l =0; l < row_num -i ;l++)
        {
            cout << "* ";
        }
        cout <<endl;
    }


   //numeric hollow full pyramid special pattern
   int row_num;
   cin >> row_num;
   for(int i=0; i<row_num ;i++)
   {
    if(i<=3)
    {
    for (int j=0; j<row_num-i-1; j++)
    {
        cout <<" ";
    }
    cout << "1";
    for(int k=0;k<(2*i-1);k++)
    {
        cout << " ";
    }
    if(i>0)
        cout << i+1;
    }
    else 
    {
        for (int j=0; j<row_num;j++)
        {
            cout << j+1 << " ";
        }
    }
    cout << endl;
   }

    //solid diamond stars only
    int n;
    cout << "Enter the number for half of diamond's length\n";
    cin >> n ;
    for (int i =0; i<n;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            cout <<" ";
        }
        for (int k=0;k<i+1;k++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }
    for (int i =0; i<n;i++)
    {
        for (int k=0;k<i;k++)
        {
            cout <<" ";
        }        
        for(int j=0; j<n-i;j++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }
}