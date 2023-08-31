/*
A geometric progression is a sequence of numbers where the ratio between
any two consecutive numbers is constant
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first, last, ratio;
    cin >> first >> last >> ratio;
    long long int up = (last * ratio) - first;
    long long int down = ratio - 1;
    long long int sum = up / down;
    cout << sum << endl;
}