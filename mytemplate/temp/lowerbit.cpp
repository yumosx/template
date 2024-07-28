#include <iostream>

using namespace std;

//判断当前二进制中含有多少个1
int lowerbit(int x) {
    return x & (-x);
}

int main() {
    cin >> x;
    int res = 0;
    while (x) x -= lowerbit(x), res++;
    
    return 0;
}