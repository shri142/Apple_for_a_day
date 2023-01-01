#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int x;
	    cin>>x;
	    
	    if(1<=x && x<100){
	        cout<<"EASY"<<endl;
	    }
	    else if(100<=x && x<200){
	        cout<<"Medium"<<endl;
	    }
	    else{
	        cout<<"HARD"<<endl;
	    }
	}
	return 0;
}
