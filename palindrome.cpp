#include <iostream>
using namespace std;
int main()
{
    int n, r , k ;
    cout << "Enter a number/n";
    cin >> n;
    k=n;
    r=0;
    while (n > 0)
    {
        r = (r * 10) +(n % 10);
        n = n / 10;
    }
    if (r == k)
    {
        cout << "n is palindrone/n";
    }
    else
    {
        cout << "n is not palindrone/n";

    }
}