#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"emter n"<<"\n";
    cin >> n;
    int a[n];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cout<<"enter target";
    cin >> target;
    int p = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == target)
        {
            p = 1;
            cout << "yes";
            break;
        }
if(p=0){
    cout<<"no";
}
    }
}
