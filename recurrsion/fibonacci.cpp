// The Fibonacci numbers, commonly denoted F(n) form a sequence, 
// called the Fibonacci sequence, such that each number is the sum of the two 
// preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.


class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c;
        if(n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
        for(int i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
        
//         //base case
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
        
//         int ans = fib(n-1)+fib(n-2);
        
//         return ans;
    }
};
