#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int>& A){
    //find the pivot
    int piv = -1, n=A.size();
    for(int i=n-2; i>=0; i--){
        if(A[i] < A[piv]){
            piv = i;
            break;
        }
    }
    //edge case
    if(piv == -1){
        reverse(A.begin(), A.end());
        return;
    }

    //next larger element
    for(int i=n-1; i>piv; i--){
        if(A[i] > A[piv]){
            swap(A[i], A[piv]);
            break;
        }
    }

    //reverse piv+1 to n-1
    int i=piv+1, j=n-1;
    while(i <= j){
        swap(A[i++], A[j--]);
    }
}

void printArray(vector<int> &A){
    int n = A.size();
    for(int i=0; i<n; i++){
        cout<< A[i] << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> A = {1, 2, 3};

    nextPermutation(A);
    printArray(A);

    return 0;
}
