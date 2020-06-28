#include "bits/stdc++.h"

using namespace std;

int r_move[4] = {1, 0, -1, 0};
int c_move[4] = {0, 1, 0, -1};

vector<vector <int> > il;

bool bfs(int r, int c) {
    queue<int> q_r, q_c;
    vector<vector <int> > l = il;
    l[r][c] = 1;
    int count = 0;

    for(int rr=1; rr<11; ++rr){
        for(int cc=1; cc<11; ++cc) {
            if(l[rr][cc] == 1) {
                q_r.push(rr);
                q_c.push(cc);
                while(!q_r.empty() && !q_c.empty()) {
                    int nr = q_r.front();
                    int nc = q_c.front();
                    q_r.pop(); q_c.pop();
                    l[nr][nc] = 0;
                    for(int k=0; k<4; ++k) {
                        if(l[nr + r_move[k]][nc + c_move[k]] == 1) {
                            q_r.push(nr + r_move[k]);
                            q_c.push(nc + c_move[k]);
                        }
                    }
                }
                count++;
            }
        }
    }

    return count == 1;
}

int main() {
    vector<int> buf(12, 0);
    il.push_back(buf);
    for(int i=0; i<10; ++i) {
        string in;
        cin >> in;
        vector<int> row;
        row.push_back(0);
        for(int j=0; j<10; ++j) {
            in.substr(j, 1) == "x" ? row.push_back(0) : row.push_back(1);
        }
        row.push_back(0);
        il.push_back(row);
    }
    il.push_back(buf);

    bool ans = false;
    for(int r=1; r<11; ++r){
        for(int c=1; c<11; ++c){
            if(bfs(r, c)) {
                ans = true;
                break;
            }
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
}