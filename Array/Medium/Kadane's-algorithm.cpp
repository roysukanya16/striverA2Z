// Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum 
// sum and return its sum.



class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int nums[], int n){
        
        // Your code here
        int maxSum=INT_MIN;
        int curSum=0;
        for(int i=0;i<n;i++){
            curSum+=nums[i];
            if(curSum>maxSum){
                maxSum=curSum;
            }
            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
        
    }
};
