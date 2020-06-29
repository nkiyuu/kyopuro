#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ans = 0;
vector<int> index_rows;

void swap(int i, int j)
{
    for (int k = j; k > i; --k)
    {
        iter_swap(index_rows.begin() + k - 1, index_rows.begin() + k);
        ans++;
    }
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        string row;
        cin >> row;
        for (int j = N - 1; j >= 0; --j)
        {
            if (row.find("1") == -1)
            {
                index_rows.push_back(0);
                break;
            }

            if (row[j] == '1')
            {
                index_rows.push_back(j);
                break;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (index_rows[i] > i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                if (index_rows[j] <= i)
                {
                    swap(i, j);
                    break; 
                }
            }
        }
    }

    cout << ans << endl;
}