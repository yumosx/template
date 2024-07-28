#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1010;
int n, m;
char a[N], b[N];
int f[N][N];

int main(){
    cin >> n >> m;
    scanf("%s", a + 1);
    scanf("%s", b + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            //首先判断是选择哪一个字符串最优
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            if (a[i] == b[j]) {
                //其次就是当两个相同的时候都是f[i-1][j-1]+1
                f[i][j] = max(f[i - 1][j - 1] + 1, f[i - 1][j - 1]);
            }
        }
    }
    cout << f[n][m];
    return 0;
}