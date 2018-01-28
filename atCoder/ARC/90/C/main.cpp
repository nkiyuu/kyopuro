#include <iostream>
#include <vector>

using namespace std;


int N;
vector< vector <int> > w;

int dfs(int row, int col, int c){
  int n;
  n = w[row][col];
  if(col == N - 1 && row == 1){
    return n + c;
  }
  else if(col == N -1 && row == 0){
    return dfs(1, col, c+n);
  }
  else{
    if(row == 0){
      return max(dfs(0,col+1,n+c), dfs(1,col,n+c));
    }
    else{
      return dfs(1, col+1, n+c);
    }
  }
}

int main() {
  cin >> N;

  w.resize(2);
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < N; j++){
      int k;
      cin >> k;
      w[i].push_back(k);
    }
  }

  cout << dfs(0,0,0) << endl;

    
  return 0;
}
