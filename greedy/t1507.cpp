#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> find_divisors(int N) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (N / i != i) {
                divisors.push_back(N / i);
            }
        }
    }
    return divisors;
}

long long find_smallest_K_with_N_divisors(int N) {
    vector<int> divisors = find_divisors(N);
    return *min_element(divisors.begin(), divisors.end());
}

int main() {
    int T; // Số lượng bộ test
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N; // Đọc giá trị N cho mỗi test
        long long result = find_smallest_K_with_N_divisors(N);
        cout << result << endl;
    }

    return 0;
}
