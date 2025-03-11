//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_set<int> seenNum;
	    
	    for(int i=0; i<n; i++){
	        int neededNum = x - arr[i];
	        
	        if(seenNum.find(neededNum) != seenNum.end()){
	            return true;
	        }
	        
	        seenNum.insert(arr[i]);
	    }
	    
	    return false;
	}
};