#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << (n-1) / 2 + 1 << endl;
        }

        t--;
    }
}