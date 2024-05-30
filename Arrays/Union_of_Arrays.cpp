//include the header files 

//Code not working properly. use a different approach for fincding the union 
//first we have to find the intersection and then union 

void doUnion(vector<int>Array1,vector<int>Array2)
{
    vector <int> Union;
    for(int i=0;i<Array1.size();i++)
    {
        Union.push_back(Array1[i]);
        for(int j=0;j<Array2.size();j++)
        {
            if(Array1[i]!=Array2[j])
            {
                Union.push_back(Array2[j]);
            }
        }
    }

    cout<<"The union array of two entered array is : ";
    for(int k=0;k<Union.size();k++)
    {
        cout<<Union[k]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want in Array1\n";
    cin >> n;
    vector <int> Array1(n);
    cout<<"Enter the elements of Array1"<<endl;
    for(int i=0;i<Array1.size();i++)
    {
        cin>>Array1[i];
    }

    int m;
    cout<<"Enter the number of elements you want in Array2\n";
    cin >> m;
    vector <int> Array2(m);
    cout<<"Enter the elements of Array2"<<endl;
    for(int i=0;i<Array2.size();i++)
    {
        cin>>Array2[i];
    }

    doUnion(Array1,Array2);
    return 0;
}