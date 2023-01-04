#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;

for(int i=0;i<t;i++){
    float s,a,b,c,change,final;
    
    cin>>s>>a>>b>>c;
    
    // change in stock=(value*percent)/100
    
    change=(s*c)/100;
    final=s+change;
    
    if(final>=a && final<=b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    
}
	return 0;
}
