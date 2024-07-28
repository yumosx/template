#include <iostream>

using namespace std;

const int N = 1e9+10;
int f[N], w[N];

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
       cin >> f[i]; 
    }

    int len = 0; 
    for (int i = 0; i < n; i++) {
        int l = 0, r = len;
        while (l < r) {
            if (q[mid] < a[i]) {
                l = mid;
            } else {
                r = mid - 1; 
            }
        }
        len = max(len, r + 1);
        q[r+1] = a[i];
    }
    
    return 0;
}