#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    vector<long long> A;
    cin >> N;
    A.resize(N);
    for(long long i=0; i<N; i++){
        long long input;
        cin >> input;
        A[i] = input;
    }

    vector<long long> B;
    B.resize(N);
    for(long long i=0; i<N; i++){
        B[i] = A[i] - i;
    }

    sort(B.begin(), B.end());

    long long ans = 0;
    for(long long i=0; i<N; i++){
        ans += abs(B[i] - B[N/2]);
    }

    cout << ans << endl;
}