#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = (n*(n+1)/2);
	    if(count%2==0){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<n-1<<endl;
	    }
	}
	return 0;
}
// still I m confused in logic
