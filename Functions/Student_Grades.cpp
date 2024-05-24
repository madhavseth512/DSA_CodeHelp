#include<iostream>
using namespace std;

char get_Grade(int n)
{
    switch(n/10)
    {
    case 10 : return 'E';
        break;
    case 9 : return 'B';
        break;
    case 8 : return 'C';
        break;
    case 7 : return 'D';
        break;
    case 6 : return 'P';
        break;
    default : return 'F';                  
    }
}

int main()
{
    int marks;
    cout<<"Enter the number of marks you have got "<<endl;
    cin>>marks;
    char grade = get_Grade(marks);
    cout<<"The grade you got is "<< grade <<endl;
    return 0;
}
