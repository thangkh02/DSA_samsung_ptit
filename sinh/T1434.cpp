#include <iostream>
#include <vector>

using namespace std;

// Hàm sinh tổ hợp kế tiếp của một tập con K phần tử
bool nextCombination(vector<int>& X, int N) {
    int K = X.size();
    for (int i = K - 1; i >= 0; --i) {
        if (X[i] < N - (K - i) + 1) {
            X[i]++;
            for (int j = i + 1; j < K; ++j) {
                X[j] = X[i] + (j - i);
            }
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> X(K);
        for (int i = 0; i < K; ++i) {
            cin >> X[i];
        }

        if (nextCombination(X, N)) {
            for (int i = 0; i < K; ++i) {
                cout << X[i] << " ";
            }
        } else {
            cout << "IMPOSSIBLE";
        }
        cout << endl;
    }

    return 0;
}
