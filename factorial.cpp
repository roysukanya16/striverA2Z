#include<iostream>
using namespace std;

int fact(int n){
    //base case
    if(n==0){
        return 1;
    }

    //recursive function
    int smallerProblem=fact(n-1);
    int biggerProblem=n*smallerProblem;

    return biggerProblem;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    cout<<endl;
    int ans = fact(n);
    cout<<"Fcatorila of "<<n<<" is: "<<ans;
    return 0;

}
