// Given a matrix mat[][] of size N x M, where every row and column is sorted in 
// increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.


//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    N--;
	    while(N>=0){
	         int low=0,high=M-1;
	         int mid=(low+high)/2;

	        while(low<=high){
	            mid=(low+high)/2;
	            if(X<mat[N][mid]){
	                high=mid-1;
	            }
	            else if(X>mat[N][mid]){
	                low=mid+1;
	            }
	            else if(X==mat[N][mid]){
	                return 1;
	            }
	        }
	        N--;
	    }
	    return 0;
	    
	}
	

};
