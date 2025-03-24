#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatingValues(vector<int>& grid){
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a, b;
    int expectedSum = 0, actualSum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }

    expectedSum = (n*n) * (n*n + 1) / 2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);

    return ans;
}

int main(){
    vector<vector<int>> grid = {{9,1,7}, {8,9,2}, {3,4,6}};

    
    return 0;
}