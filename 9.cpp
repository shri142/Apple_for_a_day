#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s,diff=0;
	    cin>>n>>s;
	    /*
	    for(int i=0;i<=n;i++){
	        for(int j=i;j<=n;j++){
	            if(i+j==s && abs(i-j)>diff ){
	                diff = abs(i-j);
	            }
	        }
	    }
	    */
	    // time ko to hm control kar nahi sakte :(
	    // lekin apne solution ko kar sakte hain :)
	    // taking hint from priyansh solution
	    if(n>=s){
	        diff = s;
	    }
	    else{
	        // t1 = n & t2= s-n
	        diff = n - (s-n); 
	    }
	    cout<<diff<<endl;
	}
	return 0;
}
