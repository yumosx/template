#include <iostream>

using namespace std;

const int N = 1e9+10
int w[N][N];
int f[N][N];
int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> w[i][j]; 
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i+1; j++) {
            f[i][j] = -N;
        }
    }

    f[1][1] = w[1][1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            f[i][j] = max(f[i-1][j-1], f[i-1][j]) + w[i][j];
        }
    }

    int res = -N;
    for (int i = 1; i <= n; i++) {
        res = max(res, f[n][i]);
    }
    return 0;
}