#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int a,b, cnt=0;
        cin>>a>>b;
        
        if(a==b){
            cout<<0<<endl;
        }else{
            while(b%a != 0){
                a /= 2;
                cnt++;
            }
            while(b != a){
                a *= 2;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
	return 0;
}
