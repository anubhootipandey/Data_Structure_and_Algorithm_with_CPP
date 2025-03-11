class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        sort(arr, arr + n);
        
        vector<int> result;
        
        for(int i=0; i<n; i++){
            if(arr[i] == arr[i - 1]){
                if(result.empty() || result.back() != arr[i]){
                    result.push_back(arr[i]);
                }
            }
        }
        
        if(result.empty()){
            result.push_back(-1);
        }
        
        return result;
        
    }
    
    
};