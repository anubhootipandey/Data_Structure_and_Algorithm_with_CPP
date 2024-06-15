#include <iostream>
#include <vector>
using namespace std;

// Keypad layout: each number has its neighbors
vector<vector<int>> neighbors = {
    {0, 8},    // Neighbors of 0
    {1, 2, 4}, // Neighbors of 1
    {2, 1, 3, 5}, // Neighbors of 2
    {3, 2, 6}, // Neighbors of 3
    {4, 1, 5, 7}, // Neighbors of 4
    {5, 2, 4, 6, 8}, // Neighbors of 5
    {6, 3, 5, 9}, // Neighbors of 6
    {7, 4, 8}, // Neighbors of 7
    {8, 5, 7, 9, 0}, // Neighbors of 8
    {9, 6, 8} // Neighbors of 9
};

// Recursive function to count sequences
int dfs(int num, int len, int n) {
    if (len == n) return 1;

    int count = 0;
    for (int neighbor : neighbors[num]) {
        count += dfs(neighbor, len + 1, n);
    }
    return count;
}

// Function to count the number of unique sequences of length n
int countSequences(int n) {
    int totalSequences = 0;
    for (int i = 0; i <= 9; i++) {
        totalSequences += dfs(i, 1, n);
    }
    return totalSequences;
}

int main() {
    int n;
    cout << "Enter the length of the sequence: ";
    cin >> n;
    cout << "Number of unique sequences of length " << n << ": " << countSequences(n) << endl;
    return 0;
}
