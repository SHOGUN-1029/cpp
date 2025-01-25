#include <bits/stdc++.h>
using namespace std;

int n; 
int ans = 0; 

void combn(vector<int>& arr, int index, int sum) {
    if (index == n || sum < 0) {
        if (sum == 0) {
            ans++; // Increment the answer if we found a valid combination
        }
        return;
    }

    // Include the current element
    if (arr[index] <= sum) {
        combn(arr, index, sum - arr[index]); // Recur with the same index to allow unlimited use of the same element
    }

    // Exclude the current element
    combn(arr, index + 1, sum);
}

int main() {
    int sum;
    cin >> sum;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    combn(arr, 0, sum); // Start from index 0 and the target sum
    cout << ans; // Output the number of combinations
    return 0;
}
