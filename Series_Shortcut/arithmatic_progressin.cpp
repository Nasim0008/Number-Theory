/*

An arithmetic progression is a sequence of numbers where the difference
between any two consecutive numbers is constant.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int first ;
    int last ;
    int number_of_term;
    cin>>first>>last>>number_of_term;
    ll sum = (number_of_term/2)*(last+first);
    cout<<sum<<endl;
    
}
