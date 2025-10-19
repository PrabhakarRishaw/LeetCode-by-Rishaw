/*
You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. 
Each integer appears exactly once except a which appears twice and b which is missing. 
The task is to find the repeating and missing numbers a and b.
Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> freq(n * n + 1, 0);
    int repeat = -1, missing = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            freq[grid[i][j]]++;
        }
    }

    for (int i = 1; i <= n * n; i++) {
        if (freq[i] == 2)
            repeat = i;
        else if (freq[i] == 0)
            missing = i;
    }

    return {repeat, missing};
}

int main() {
    int n;
    cout << "Enter size of grid (n): ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    cout << "Enter elements of grid:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> ans = findMissingAndRepeatedValues(grid);
    cout << "Repeated: " << ans[0] << ", Missing: " << ans[1] << endl;

    return 0;
}
