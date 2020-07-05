#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t>0)
    {
        int n, k;
        cin >> n >> k;

        vector <vector <int> > grid;
        grid.resize(n);
        for (int i=0; i<n; ++i)
        {
            grid[i].resize(n) ;
            fill(grid[i].begin(), grid[i].end(), 0);
        }

        for (int i=0; i<k; ++i)
        {
            
        }


        t--;
    }
}