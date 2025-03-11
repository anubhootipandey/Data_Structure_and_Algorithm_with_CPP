class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        if(n==1) return 1;
        
        long long totalSum = 0;
        for(int i=0; i<n; ++i){
            totalSum += a[i];
        }
        
        long long leftSum = 0;
        for(int i=0; i<n; ++i){
            totalSum -= a[i];
            
            if(leftSum == totalSum){
                return i + 1;
            }
            
            leftSum += a[i];
        }
        
        return -1;
    }

};