#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    nums1.resize(m);
    for (int i = 0; i < n; i++) {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(), nums1.end());
}

int main()
{
    int m, n;
    cout << "Enter number of valid elements in nums1: ";
    cin >> m;
    cout << "Enter number of elements in nums2: ";
    cin >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    cout << "Enter elements of nums1 (sorted): ";
    for (int i = 0; i < m; i++)
        cin >> nums1[i];

    cout << "Enter elements of nums2 (sorted): ";
    for (int i = 0; i < n; i++)
        cin >> nums2[i];

    merge(nums1, m, nums2, n);

    cout << "Merged sorted array: ";
    for (int i = 0; i < m + n; i++)
        cout << nums1[i] << " ";
    cout << endl;

    return 0;
}
