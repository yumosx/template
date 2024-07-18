#include <iostream>

using namespace std;

const int N = 1e6;
int dist[N], st[N], g[N][N];
int n;

int dj() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;

    for (int i = 0; i < n - 1; i++) {
        int t = -1;
        for (int j = 1; j <= n; j++) {
            if (!st[j] && (t == -1 || dist[t] > dist[j])) t = j;
        }

        st[t] = true;
        for (int j = 1; j <= n; j++) {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
    }

    if (dist[n] == 0x3f3f3f3f) return -1;

    return dist[n];
}



int main() {
    return 0;
}