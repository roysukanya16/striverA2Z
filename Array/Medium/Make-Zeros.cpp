// Given a matrix of  size n x m. Your task is to make Zeroes, that means in whole matrix when you find a zero, convert its upper, lower, 
// left, and right value to zero
// and make that element the sum of the upper, lower, left and right value. Do the following tasks according to the initial matrix.
// Input: matrix = {{1, 2, 3, 4},
//                  {5, 6, 0, 7}, 
//                  {8, 9, 4, 6},
//                  {8, 4, 5, 2}}
// Output: {{1, 2, 0, 4}, 
//          {5, 0, 20, 0},
//          {8, 9, 0, 6}, 
//          {8, 4, 5, 2}}
// Explanation: As matrix[1][2] = 0, we will
// perform the operation here. Then matrix[1][2]
// = matrix[0][2] + matrix[2][2] + matrix[1][1] 
// + matrix[1][3] and matrix[0][2] = matrix[2][2] 
// = matrix[1][1] = matrix[1][3] = 0.
  
  
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int> > res( n , vector<int> (m, 0)); 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    int top = i>0? matrix[i-1][j]:0;
                    int down = i<n-1? matrix[i+1][j]:0;
                    int left = j>0? matrix[i][j-1]:0;
                    int right = j<m-1? matrix[i][j+1]:0;
                    res[i][j]=top+down+left+right;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(res[i][j]!=0){
                    if(i>0) matrix[i-1][j]=0;
                    if(i<n-1) matrix[i+1][j]=0;
                    if(j>0) matrix[i][j-1]=0;
                    if(j<m-1) matrix[i][j+1]=0;
                    matrix[i][j]=res[i][j];
                }
            }
        }
    }
};
