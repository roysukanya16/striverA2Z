#include<iostream>
using namespace std;
void something_N(int n){
    //base case
    if(n==0){
        return;
    }
    //R.R
    something_N(n-1);

    cout<<"Sukanya"<<endl;
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    something_N(n);
    return 0;

}