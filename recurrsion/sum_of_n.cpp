#include<iostream>
using namespace std;

int sum_n(int n){
    //base case
    if(n==0){
        return 0;
    }
    //recursive function
    int smallerProblem= sum_n(n-1);
    int biggerProblem = n + smallerProblem;

    return biggerProblem;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    cout<<endl;
    int ans = sum_n(n);
    cout<<"Your answer is: "<<ans;
    cout<<endl;
    cout<<"\nThank You!!"<<endl;;
    return 0;
}
