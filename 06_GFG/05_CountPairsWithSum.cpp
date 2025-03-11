//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> freq;
        
        int count = 0;
        
        for(int i=0; i<n; i++){
            int complement = k - arr[i];
            
            if(freq.find(complement) != freq.end()){
                count += freq[complement];
            }
            freq[arr[i]]++;
        }
        return count;
    }
};