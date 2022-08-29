#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a numbr: ";
    cin>>n;
    int x=1;
    while(x<=n){
        if(n%x==0){
            cout<<x<<" ";
        }
        x++;
    }
}