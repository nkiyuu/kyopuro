#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int answer;
    if(N % 2 == 0) {
        answer = N;
    } else {
        answer = N * 2;
    }    

    cout << answer << endl;
}