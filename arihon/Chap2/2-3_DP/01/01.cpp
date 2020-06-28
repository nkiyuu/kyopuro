#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N, W;
  cin >> N >> W;

  vector< pair <int,int> > inputs;
  for(int i = 0; i < N; i++){
    int f, s;
    cin >> f >> s;
    pair<int, int> inp;
    inp.first = f;
    inp.second = s;
    inputs.push_back(inp);
  }

  int dp[N + 1][W + 1];

  for (int i = 0; i < N+1; i++){
    for (int j = 0; j < W+1; j++){
      dp[i][j] = 0;
    } 
  }

  for(int i = N-1; i >= 0; i--){
    for (int j = 0; j <= W; j++){
      if (j < inputs[i].first) {
        dp[i][j] = dp[i + 1][j];
      }
      else {
        dp[i][j] = max(dp[i+1][j], dp[i+1][j - inputs[i].first] + inputs[i].second);
      }
    }
  }

  cout << dp[0][W] << endl;

  // for(int i = 0; i < inputs.size(); i++){
  //   cout << inputs[i].first << " " << inputs[i].second << endl;
  // } 
  

  return 0;
}
