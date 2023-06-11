// Implement the next permutation, which rearranges the list of numbers into Lexicographically next greater permutation of list of
// numbers. If such arrangement is not possible,
// it must be rearranged to the lowest possible order i.e. sorted in an ascending order. You are given an list of numbers arr[ ] of size N.


// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        vector<int> ans;
        int breakPoint;
        int flag=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]>arr[i-1]) {
                breakPoint=i-1;
                flag=1;
                break;
                
            }
        }
        if(flag==0){
            for(int i=n-1;i>=0;i--){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        
        for(int i=n-1;i>=0;--i){
            if(arr[i]>arr[breakPoint]){
                int temp=arr[i];
                arr[i]=arr[breakPoint];
                arr[breakPoint]=temp;
                break;
            }
        }
        for(int i=0;i<=breakPoint;++i){
            ans.push_back(arr[i]);
        }
        for(int i=n-1;i>breakPoint;i--){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
