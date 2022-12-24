#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
// 	if(n<1 || n>100000){
// 	    return 0;
// 	}
	
	for(int i=0;i<n;i++){
	    
	   int d,l,r;
	   
	   cin>>d>>l>>r;
	   
	   //if(r>l){
	   //    return 0;
	   //}else{
	       
	   //    if(d<1 || d>1000000000 || l<1 || l>1000000000  ||  r<1 || r>1000000000 )
	   //    {
	   //       return 0;
    //           	}
	       
	   //}
	   
	 if(d>=l && d<=r){
	     cout<<"Take second dose now"<<endl;
	 } 
	 if(d<l){
	     cout<<"Too Early"<<endl;
	 }
	 if(d>r){
	      cout<<"Too Late"<<endl;
	 }
	    
	    
	    
	}
	return 0;
}
