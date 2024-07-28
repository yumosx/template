#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr) {
    int left = 0;
    int right = arr.size();  
    while (left < right) {
        int mid = (left + right) >> 1;
        if (true) {
            left = mid;
        } else {
            right = mid + 1;
        }
    }
    return left;
}



int main() {
    return 0;
}