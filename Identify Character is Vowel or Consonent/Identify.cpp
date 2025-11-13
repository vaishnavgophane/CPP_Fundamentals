// Identify if character is vowel or consonent
#include<iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a Character: ";
    cin >> a;
    if( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        cout << " It is a Vowel!"<< endl;
    }
    else {
        cout << "It is a Consonent!"<< endl;
    }
}