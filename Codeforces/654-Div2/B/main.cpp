#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        long long n, r;
        cin >> n >> r;

        long long ans = 0;
        if (n > r)
        {
            ans = (r + 1) * r / 2; 
        }
        else
        {
            ans = (n - 1) * n / 2 + 1;
        } 

        cout << ans << endl;
        t--;
    }
}