#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> inputs;
    inputs.resize(N);

    for(int i = 0; i < N; i++){
        int input;
        cin >> input;
        inputs[i] = input;
    }

    int answer = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(abs(inputs[j] - inputs[i]) > answer) {
                answer = abs(inputs[j] -inputs[i]);
            }
        }
    }

    cout << answer << endl;
}