
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int c = 4; c >= i; c--)
        {

            cout << " ";
        }
        for (int s = 1; s <= i; s++)
        {
            cout << i;
            
        }
        cout << "\n";
    }
}
