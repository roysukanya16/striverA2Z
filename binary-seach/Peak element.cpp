// An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
// Given an array arr[] of size N, Return the index of any one of its peak elements.
// Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int low=0;
       int high=n-1;
       //int mid=(low+high)/2;
       while(low<high){
           int mid=(low+high)/2;
           if(arr[mid]<arr[mid+1])
                low= mid+1;
           else
                high=mid;
           
       }
       return low;
       
    }
};
