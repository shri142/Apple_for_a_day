#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    int N,A,B,extra_sec;
	    cin>>N>>A>>B;
	    
	    extra_sec=N*2;
	    
	    cout<<(360+extra_sec)-(A+B)<<endl;
	    
	    
	}
	return 0;
}
