#include <iostream>
using namespace std;

long long coordinates[71][71];
long long ways[71][71];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> coordinates[i][j];
            ways[i][j] = 0;
        }
    }

    ways[1][1] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (ways[i][j] != 0 && coordinates[i][j] != 0) {
                long long steps = coordinates[i][j];

                if (j + steps <= m) ways[i][j + steps] = (ways[i][j + steps] + ways[i][j]) % 1000000007;
                if (i + steps <= n) ways[i + steps][j] = (ways[i + steps][j] + ways[i][j]) % 1000000007;
            }
        }
    }

    cout << ways[n][m] % 1000000007;

    return 0;
}