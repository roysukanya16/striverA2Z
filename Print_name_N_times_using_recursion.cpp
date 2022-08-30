//Question-->Print your name N number of times using recursion

#include<iostream>
using namespace std;
void name_N(int n){
    //base case
    if(n==0){
        return;
    }
    //R.R
    name_N(n-1); //head recursion

    cout<<"Sukanya"<<endl;
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    name_N(n);
    return 0;

}
