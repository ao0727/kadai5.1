#include <iostream>

using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cout << "Nを入力: ";
    cin >> N;

    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        if (countDivisors(i) == 8) {
            count++;
        }
    }

    cout << "約数が8個の奇数の数: " << count << endl;

    
}
