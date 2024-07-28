#include <iostream>

using namespace std;

class solation {
public:
    bool isjump(vector<int>& nums) {
        int n = nums.size();
        int maxr = 0;

        for (int i = 0; i < n; i++) {
            if (i > maxr) return false;
            maxr = max(maxr, num[i]+i)
        }

        if (maxr >= n-1) return true;
        else return false;
    }
};



int main() {
    
    return 0;
}