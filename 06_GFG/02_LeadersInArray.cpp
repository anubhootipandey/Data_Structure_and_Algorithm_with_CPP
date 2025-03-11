    
class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int> result;
        
        int maxFromRight = a[n-1];
        result.push_back(maxFromRight);
        
        for(int i= n-2; i >= 0; i--){
            if(a[i] >= maxFromRight){
                maxFromRight = a[i];
                result.push_back(maxFromRight);
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
        
    }
};