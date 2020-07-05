#include <iostream>

using namespace std;

int main()
{
    int N;
    int AC = 0, WA = 0, TLE = 0, RE = 0;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string input;
        cin >> input;
        if (input == "AC")
        {
            AC++;
        }
        else if (input == "WA")
        {
            WA++;
        }
        else if (input == "TLE")
        {
            TLE++;
        }
        else if (input == "RE")
        {
            RE++;
        }
    }

    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;
}