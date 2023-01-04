#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<< "Enter the number of row and coloum for the first matrix: ";
    cin>>r1>>c1;
    cout<< "Enter the number of row the coloum for the second matrix: ";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<< "Erorr!!"<<endl;
        cout<< "Enter the number of row and coloum for the first matrix: ";
        cin>>r1>>c1;
        cout<< "Enter the number of row the coloum for the second matrix: ";
        cin>>r2>>c2;
    }
    int first[r1][c1],second[r2][c2];
    cout<< "enter the value of first matrix: ";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>first[i][j];
        }
    }
    cout<<"enter the value of second matrix: ";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>second[i][j];
        }
    }
    int result[100][100];
    int sum =0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum+=(first[i][k]*second[k][j]);
            }
            result[i][j]=sum;
            sum = 0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<result[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;

}