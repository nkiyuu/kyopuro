#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    for (long long i=0; i<N; i++)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        if ((n - n % x) + y > n)
        {
            cout << (n - n % x) - x + y << endl;
        } else {
            cout << (n - n % x) + y << endl;
        }
    }
}