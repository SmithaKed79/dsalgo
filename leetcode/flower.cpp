#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
for (int i = 0; i < flowerbed.size(); ++i) {
            // Check if we can plant a flower at position i
            if (flowerbed[i] == 0) {
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);  // Check if the left plot is empty or does not exist
                bool rightEmpty = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);  // Check if the right plot is empty or does not exist

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;  // Plant a flower here
                    --n;  // Reduce the count of flowers to be planted
                    if (n == 0) {
                        return true;  // We have planted all the required flowers
                    }
                }
            }
        }
        return n <= 0; 
    }
};

int main() {
    Solution sol;
    vector<int> fl({1,0,1,0,0});
    int n = 1;
    bool yes = sol.canPlaceFlowers(fl, n);
    cout<<yes<<endl;

    return 0;
}