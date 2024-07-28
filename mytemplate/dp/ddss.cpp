#include <iostream>

using namespace std;

const int N = 1010;
int w[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    for (int i = 1; i <= n; i++) {
       f[i] = 1;
       //然后从头开始遍历到i，如果前面a[j] < a[i]则表示这是一个上升序列
       for (int j = 1; j < i; j++) {
            if (a[j] < a[i]) {
                f[i] = max(f[i], f[j]+1);
            }
       } 
    }
    int max = f[0];
    for (int i = 0; i <= n; i++) {
        if (max < f[i]) max = f[i];
    }
    
    return 0;
}