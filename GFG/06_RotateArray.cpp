class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d= d%n;
        if(d==0) return;
        
        reverse(arr, arr + d);
        reverse(arr + d, arr + n);
        reverse(arr, arr + n);
    }
    
    void reverse(int* start, int* end){
        while(start < end){
            int temp = *start;
            *start = *(end - 1);
            *(end - 1) = temp;
            start++;
            end--;
        }
    }
};