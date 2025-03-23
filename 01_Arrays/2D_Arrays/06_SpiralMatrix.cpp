#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& mat){
    int m = mat.size(), n = mat[0].size();
    int sRow = 0, sCol = 0, eRow = m-1, eCol = n-1;
    vector<int> ans;

    while(sRow <= eRow && sCol <= eCol){
        //top boundary
        for(int j=sCol; j<=eCol; j++){
            ans.push_back(mat[sRow][j]);
        }

        //right boundary
        for(int i=sRow+1; i<=eRow; i++){
            ans.push_back(mat[i][eCol]);
        }

        //bottom boundary
        for(int j=eCol-1; j>=sCol; j--){
            //corner case
            if(sRow == eRow){
                break;
            }
            ans.push_back(mat[eRow][j]);
        }

        //left boundary
        for(int i=eRow-1; i>=sRow+1; i--){
            //corner case
            if(sCol == eCol){
                break;
            }
            ans.push_back(mat[i][sCol]);
        }

        sRow++; eRow--; sCol++; eCol--;
    }

    return ans;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
    vector<int> result = spiralMatrix(matrix);

    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}