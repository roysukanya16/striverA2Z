	#include<iostream>
    #include<cstring>
    using namespace std;
    
string reverseString(int start,int end,string &S){
    string rev;
    //base case
    if(start>=end){
        return rev;
    }
    //processing
    int t=S[start];
    S[start]=S[end];
    S[end]=t;
    //R.R
    rev = reverseString(start+1,end-1,S);
    cout<<S<<endl;
    return rev;
}
int isPalindrome(string &S)
	{
	    // Your code goes here
	    int start,end,i;
	    start=0;
	    end=S.length();
	    string Scpy;
        Scpy=S;

        reverseString(start,end-1,S);

        cout<<Scpy<<endl;
	    for(i=0;i<end;i++){
	       if(Scpy[i]!=S[i]){
	           return 0;
	       }
	    }
        cout<<S<<endl;
	    return 1;
	    
	}

int main() {
	//code

	string S = "abba";
	int check=isPalindrome(S);
    cout<<check;

	return 0;
}
