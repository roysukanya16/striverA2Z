#include <iostream>
using namespace std;
// void reverseArray(int n,int arr[]){ //just printing the array
//     //base case
//     if(n==0){                       //in reversed order
//         return;
//     }
//     //processing
//     cout<<arr[n-1]<<" ";
    
//     //R.R
//     reverseArray(n-1,arr);
// }

void reverseArray(int start,int end,int arr[]){
    //base case
    if(start>=end){
        return;
    }
    //processing
    int t=arr[start];
    arr[start]=arr[end];
    arr[end]=t;
    
    //R.R
    reverseArray(start+1,end-1,arr);
    
}
int main() {
	//code
	int t,n,arr[100];
	cin>>t;
	
	
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        int start=0;
	    int end=n-1;
	    
    	reverseArray(start,end,arr);
    	
    	for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
    	cout<<endl;
	}
	return 0;
}