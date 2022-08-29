#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<" ";
    //recurcive call
    print(n-1);     //Tail Recursion

    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    cout<<endl;
    print(n);
    cout<<"\nThank You!!";
    return 0;
}