#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    int N,ans;
	    cin>>N;
	    ans=(N+1)/2;
	    
	    if(N==1){
	        cout<<1<<endl;
	    }
	    else{
	       cout<<ans<<endl; 
	    }
	}
	return 0;
}
