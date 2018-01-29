#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > mp;

int bfs(int st, int end, vector<int> used_list){
 
}

int main() {
   int N, M;
   cin >> N >> M;
   mp.resize(N);
   for(int i=0; i<N; i++){
     mp[i].resize(N);
     for(int j=0; j<N; j++){
       mp[i][j] = -1;
     }
   }
   for(int i=0; i < M; i++){
     int l, r, d;
     cin >> l >> r >> d;
     l--; r--;
     mp[l][r] = d;
     mp[r][l] = -d;
   }
   
   // for debug
   // for(auto i : mp){
   //   for(auto j : i){
   //     cout << j <<" ";
   //   }
   //   cout << endl;
   // } 
   return 0;
}
