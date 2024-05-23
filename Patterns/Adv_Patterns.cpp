#include<iostream>
using namespace std;

int main()
{
    //HOLLOW DIAMOND PATTERN
    int n;
    cout <<"Enter the number for half of hollow diamond's vertical row length\n";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1;j++)
        {   
            cout<<" ";
        }
        cout <<"*";
        for(int k=0; k<2*(i)-1;k++)
        {
            cout <<" ";
        }
        if(i>0)
            cout<<"*";
        cout<<endl;
    }
    for(int i=0; i<n ; i++)
    {
        for (int j=0; j<i;j++)
        {
            cout <<" ";
        }
        cout <<"*";
        for(int k=0; k<2*(n-i)-3;k++)
        {
            cout <<" ";
        }
        if(i<4)
        {
        cout <<"*";
        }

        cout << endl;
    }

    //FLIPPED SOLID DIAMOND 
    //ALTERNATE METHOD ---break the pattern into two parts lower half and the upper half then for each half print a half pyramid
    //of stars then a full pyramid of spaces and then again a half pyramid of stars
    int n;
    cout <<"Enter the number of stars you want for each side\n";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if(i<n/2)
        {
            for (int j=0;j<(n/2-i);j++)
            {
                cout <<"*";
            }
            for(int k=0;(k<i) && (i<n/2);k++)
            {
                cout <<" ";
            }
            for(int k=0;(k<i) && (i<n/2);k++)
            {
                cout <<" ";
            }
            for (int j=0;j<(n/2-i);j++)
            {
                cout <<"*";
            }
            cout << endl;            
        }
        if(i>=(n/2))
        {
            for (int j=0;j<i-(n/2)+1;j++)
            {
                cout <<"*";
            }
            for (int k=0;k<n-i-1;k++)
            {
                cout <<" ";
            }
            for (int k=0;k<n-i-1;k++)
            {
                cout <<" ";
            }
            for (int j=0;j<i-(n/2)+1;j++)
            {
                cout <<"*";
            }
            cout<<endl;                        
        }
    }
    
    //Fancy Pattern #2 -- here observe clearly where stars are not printed after the numeric digit
    int n;
    cout << "Enter the number which numerically tells the scale of this pattern\n";
    cin >> n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout <<i+1;
            if (j<i)
            {
                cout <<"*";
            }
        }
        cout <<endl;
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            cout <<n-i;
            if (j<n-i-1)
            {
                cout <<"*";
            }   
        }
        cout <<endl;        
    }

    //ALPHABETICAL PALINDROME PYRAMID -- imporant concept is that in a loop how after printing numbers in ascending order how do you 
    //print it again in descending order. 
    int n;
    cout <<"Enter the numeric equivalent of alphabet till which you want to print the palindrome pyramid\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(2*i+1);j++)
        {
            if(j<=i)
            {
            cout << (char)(65+j);
            }
        }
        for(int k=0;k<i;k++)
        {
            cout << (char)(64+i-k);
        }
        cout << endl;
    }

    //Numeric Palindrome Equilateral Pyramid 
    int n;
    cout <<"Enter the number of rows in the pyramid\n";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            cout <<" ";
        }
        for (int k=0;k<2*(i+1)-1;k++)
        {
            if(k<=i)
            {
                cout<<k+1;
            }
        }
        for(int l=0;l<i;l++)
        {
            cout <<i-l;
        }
        for (int j=0;j<n-i-1;j++)
        {
            cout <<" ";
        }        
        cout << endl;
    }

    //FANCY PATTERN #1
    int n;
    cout <<"Enter the number of rows for this pattern\n";
    cin >>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<(8-i);j++)
        {
            cout <<"*";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<i+1;
            if(i!=k)
            {
                cout<<"*";
            }
        }
        for(int j=0;j<(8-i);j++)
        {
            cout <<"*";
        }
        cout << endl;        
    }

    //FANCY PATTERN #3 --notice how we put conditions and arranged loops when we encounter the situation of 
    //descending count after ascending count in both cases of number of times we want to run the loop or the 
    //value we want to put in it.
    int n;
    cout <<"Enter the number of rows for this pattern\n";
    cin >> n;
    for(int i=0;i<=n/2;i++)
    {
        for(int j=0;j<(2*(i)+1);j++)
        {
            if(j==0 || j==2*i)
            {
            cout << "*";
            }
            else
            {
                if(j<=i)
                    cout <<j;
                else 
                    cout <<2*i-j;
            }
        }
        cout <<endl;
    }
    for(int k=0;k<n/2;k++)
    {
        for(int l=0;l<2*(n/2-k)-1;l++)
        {
            if(l==0 || l==2*(n/2-k)-2)
            cout << "*";
            else 
            {
                if(l<(3-k))
                    cout << l;
                else
                    cout << n/2+l-(2*(n/2-k)-1);   
            }
        }
        cout << endl;
    }

    //FANCY PATTERN #4 -- this code took too much of my time.
    int n;
    cout <<"For this fancy pattern enter the number of rows you want to print\n";
    cin >> n;
    int var_num_1=0;
    int var_num_2=1+((n/2*(n/2-1))/2);

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout << var_num_1+1;   
            if ( j!=i)
                cout <<"*";
                var_num_1++;
        }
    cout <<endl;
    }
    
    for(int k=0;k<n/2;k++)
    {
        for(int l=0;l<n/2-k;l++)
        {
            cout << var_num_2+l;
            if(l != n/2-k-1)
                cout <<"*";
        }
    var_num_2=var_num_2-((n/2)-k-1);
    cout <<endl;
    }

    //FLOYD'S TRIANGLE
    int n;
    cout <<"Enter the number of rows you want to print in this Floyd's Triangle\n";
    cin >> n;
    int var_count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout <<var_count<<" ";
            var_count++;
        }
        cout <<endl;
    }

    //PASCAL'S TRIANGLE -- In pascals triangle initialize the row count from 0 and observe that from i>0 there is
    //a pattern of binomial coefficients C(i,j) 
    //also the formula used in this code needs to be looked upon
    int n;
    cout <<"Enter the number of rows you want to print in this Pascal's Triangle\n";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout <<" ";
        }
        int c=1;
        for(int j=1;j<=i;j++)
        {
            cout <<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}

