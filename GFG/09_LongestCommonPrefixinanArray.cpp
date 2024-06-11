#include<bits/stdc++.h>
using namespace std;


class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N == 0) return "-1";
        
        string prefix = arr[0];
        
        for(int i=1; i<N; ++i){
            while(arr[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length() - 1);
                
                if(prefix.empty()) return "-1";
            }
        }
        return prefix;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}