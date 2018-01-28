#include <iostream>
#include <map>

using namespace std;

int main() {
   map<int, map<int, int> > mp;
   map<int, pair<int, int> > inputs;

   int N, M;
   cin >> N >> M;
   for(int i=0; i < M; i++){
     int l, r, d;
     cin >> l, r, d;
     inputs[l] = make_pair(r,d);
   }
   
   for(map<int,pair<int, int> >::iterator it=inputs.begin(); it != inputs.end(); ++it){
     cout << it->first << " " << it->second.first << ":" << it->second.second << endl;

   }
   
   return 0;
}
