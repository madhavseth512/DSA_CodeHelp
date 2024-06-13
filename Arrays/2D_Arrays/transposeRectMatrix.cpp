#include<iostream>
#include<vector>
using namespace std;

//Here we are transposing a rectangular/square matrix. In the matrixTranspose.cpp the method we used can only transpose a square matrix
int main()
{
    int rows;
    int columns;
    cout<<"Enter number of rows in your matrix\n";
    cin >> rows;
    cout<<"Enter number of columns in your matrix\n";
    cin >> columns;
    
    vector < vector <int> > matrix(rows, vector <int> (columns));

    //Taking input in the matrix
    cout<<"Enter the matrix"<<endl;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cin>> matrix[i][j];
        }
    }

    vector <vector <int> > transposeMatrix(columns, vector < int > (rows));

    for(int i=0;i<transposeMatrix.size();i++)
    {
        for(int j=0;j<transposeMatrix[0].size();j++)
        {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }
      
    cout<<"The transposed matrix is : "<<endl;  
    for(int i=0;i<transposeMatrix.size();i++)
    {
        for(int j=0;j<transposeMatrix[0].size();j++)
        {
            cout<<transposeMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}