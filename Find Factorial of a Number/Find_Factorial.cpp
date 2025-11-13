// Find factorial of a Number 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    int f=0;
    for(int i=a-1;i>=1;i--)
    {
        a *=i;
    }
    cout << "Factorial : " << a << endl;
}