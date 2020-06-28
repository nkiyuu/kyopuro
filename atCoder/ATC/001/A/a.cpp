#include "bits/stdc++.h"

using namespace std;

int x_move[4] = {1, 0, -1, 0};
int y_move[4] = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector <string> > town;

    // 枠作成
    vector<string> buf(W+2, "#");
    town.push_back(buf);

    int pos_x, pos_y, goal_x, goal_y;
    stack<int> s_x;
    stack<int> s_y;
    
    // 入力をいい感じに受け取る
    for (int i = 0; i < H; ++i) {
        vector<string> row;
        // 枠作成
        row.push_back("#");
        string in;
        cin >> in;
        for (int j = 0; j < W; ++j){
            if (in.substr(j,1) == "s") {
                // スタートのポジションを保持
                pos_x = j + 1;
                pos_y = i + 1;
                // スタックに開始位置を push
                s_x.push(pos_x);
                s_y.push(pos_y);
            }
            if (in.substr(j,1) == "g") {
                // ゴールを設定
                goal_x = j + 1;    
                goal_y = i + 1;
            }
            row.push_back(in.substr(j, 1));
        }
        // 枠作成
        row.push_back("#");
        town.push_back(row);
    }
    // 枠作成
    town.push_back(buf);

    bool ans = false;

    // dfs
    while(!s_x.empty() && !s_y.empty()) {
        pos_x = s_x.top();
        pos_y = s_y.top();
        s_x.pop(); s_y.pop();

        // 自身の位置を塀に変える
        town[pos_y][pos_x] = "#";

        for(int i=0; i<4; ++i) {
            if(town[pos_y + y_move[i]][pos_x + x_move[i]] == ".") {
                // 行ける場所だったらスタックにプッシュ
                s_x.push(pos_x + x_move[i]);
                s_y.push(pos_y + y_move[i]);
            }
            if(town[pos_y + y_move[i]][pos_x + x_move[i]] == "g") {
                ans = true;
                break;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
}