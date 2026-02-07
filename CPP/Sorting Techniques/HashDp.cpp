#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> dp;

    int racecar(int target) {
        dp = vector<int>(target + 1, -1); // Initialize memoization array
        return helper(target);
    }

    int helper(int target) {
        if (dp[target] != -1) return dp[target]; // Memoization check

        int n = 1, pos = 1;
        while (pos < target) {
            pos = (1 << n) - 1; // Compute 2^n - 1
            n++;
        }

        // Case 1: If we reach the target exactly
        if (pos == target) return dp[target] = n;

        // Case 2: Overshoot and reverse
        int overshoot = helper(pos - target) + n + 1;

        // Case 3: Stop before and reverse
        int best = INT_MAX;
        for (int m = 0; m < n - 1; ++m) {
            int before = (1 << (n - 1)) - 1 - ((1 << m) - 1);
            best = min(best, (n - 1) + 1 + m + 1 + helper(target - before));
        }

        return dp[target] = min(overshoot, best);
    }
};

int main() {
    Solution sol;

    int target;
    cout << "Enter the target: ";
    cin >> target;

    cout << "Minimum number of steps required to reach the target: " << sol.racecar(target) << endl;
    return 0;
}
