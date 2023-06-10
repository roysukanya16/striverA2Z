#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        return;
    }

    //recurcive call
    print(n-1);     //Head Recursion

    //processing
    cout<<n<<" ";

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
