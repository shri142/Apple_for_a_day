#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    
	    int a,b,x,diff;
	    
	    cin>>a>>b>>x;
	    
	    diff=b-a;
	   
	   if(diff%x==0){
	       cout<<diff/x<<endl;
	   }else{
	       cout<<(diff/x)+1<<endl;
	   }
	    
	}
	return 0;
}
