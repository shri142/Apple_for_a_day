#include <iostream>
using namespace std;

int main() {

int t;
cin>>t;

for(int i=0;i<t;i++){
    int w1,w2,x1,x2,m,diff,min_incrs,max_incrs;
    cin>>w1>>w2>>x1>>x2>>m;
    
    diff=w2-w1;
    min_incrs=m*x1;
    max_incrs=m*x2;
    
    if(diff<min_incrs || diff>max_incrs ){
        cout<<"0"<<endl;
    }else{
        cout<<"1"<<endl;
    } 
      
}
	return 0;
}
