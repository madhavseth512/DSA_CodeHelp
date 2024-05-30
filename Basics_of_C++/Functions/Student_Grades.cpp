#include<iostream>
using namespace std;

//This is the Student Grade Flowchart using switch case statement. It can also be printed by using if-elseif-else
//statement in the get_Grade() function.

char get_Grade(int n)
{
    switch(n/10)
    {
        //incorporated the case of full marks (marks = 100)
    case 10 : return 'A';
        break;
    case 9 : return 'B';
        break;
    case 8 : return 'C';
        break;
    case 7 : return 'D';
        break;
    case 6 : return 'E';
        break;
    default : return 'F';                  
    }
}

int main()
{
    int marks;
    cout<<"Enter the number of marks you have got "<<endl;
    cin>>marks;
    //data type of grade variable is char.
    char grade = get_Grade(marks);
    cout<<"The grade you got is "<< grade <<endl;
    return 0;
}
