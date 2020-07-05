#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int H, W, K;
    cin >> H >> W >> K;

    vector<string> grid;
    for (int i = 0; i < H; ++i)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }

    vector<string> grid_i;
    vector<string> grid_j;
    grid_i = grid;
    grid_j = grid;

    int ans = 0;

    for (int i = 0; i < pow(2, H); i++)
    {
        grid_i = grid;
        for (int x = 0; x < H; x++)
        {
            if (i >> x & 1)
            {
                for (int a = 0; a < W; ++a)
                {
                    grid_i[x][a] = '*';
                }
            }
        }

        for (int j = 0; j < pow(2, W); j++)
        {
            grid_j = grid_i;
            for (int y = 0; y < W; y++)
            {
                if ((j >> y) & 1 == 1)
                {
                    for (int b = 0; b < H; ++b)
                    {
                        grid_j[b][y] = '*';
                    }
                }
            }

            int count = 0;
            for (int c=0; c < H; ++c)
            {
                for (int d=0; d < W; ++d)
                {
                    if (grid_j[c][d] == '#') count++;
                }
            }
            if (count == K) ans++;
        }
    }

    cout << ans << endl;
}
