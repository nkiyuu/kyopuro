#include <iostream>
#include <math.h>
#include <vector>
#include <bitset>

using namespace std;

int main()
{
    string input_string;
    cin >> input_string;

    bitset<10> bit;
    vector<long> nums;
    vector<string> formula;

    for (int i = 0; i < pow(2, input_string.size() - 1); ++i)
    {
        bit = i;

        string string_num = "";
        for (int j = 0; j < input_string.size(); ++j)
        {
            string_num += input_string.substr(j, 1);
            if (bit[j] == 1)
            {
                formula.push_back(string_num);
                string_num = "";
            }
        }
        formula.push_back(string_num);

        long total = 0;
        for (int j = 0; j < formula.size(); ++j)
        {
            total += stol(formula[j]);
        }

        nums.push_back(total);
        formula.clear();
    }

    long ans = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        ans += nums[i];
    }

    cout << ans << endl;
}