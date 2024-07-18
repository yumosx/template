#include <iostream>

using namespace std;
const int N = 1000;
int f[N];


int find(int x) {
    if (f[x] != x) {
        f[x] = find(f[x]);
    }
    return f[x];
}

int main() {
    int x = 0;
    int y = 0
    f[find(x)] = find(y);
    return 0;
}