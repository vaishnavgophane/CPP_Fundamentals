// Write a C++ code to to Find even and odd numbers in a range
#include<iostream>
using namespace std;
int main()
{
    int s,e;
    cout << "Enter Start : ";
    cin >> s;
    cout << "Enter End : ";
    cin >> e;
    cout << "Even Numbers : ";
    for(int i=s;i<=e;i++)
    {
        if(i % 2 == 0)
        {
            cout << " " << i;
        }
    }
    cout << "\nOdd Numbers : " ;
    for(int i=s;i<=e;i++)
    {
        if(i % 2 != 0)
        {
            cout << " " << i;
        }
    }
}