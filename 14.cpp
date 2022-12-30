#include <iostream>
using namespace std;

int smallest(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int n,a,b,c,d,newb,small;
	    //a =fruit
	    //b =vegi
	    //c =fishes
	    
	    //  a>b   =====> b dishesh
	    //   a==b ======> b dishesh
	    //   a<b   ======> a+(newb=b-a) + smallest(newb,c)
	   
	   
	   
	    cin>>n>>a>>b>>c;
	    
	    if(a>b){
	        d=b;
	    }
	    else if(a==b){
	        d=b;
	    }
	    else{
	        newb=b-a;
	        small=smallest(newb,c);
	        d=a+small;
	        
	    }
	    
	    if(d<n){
	        
	        cout<<"NO"<<endl;
	        
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	    
	}
	return 0;
}
