#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    int b[a];
	    int ans=0;
	    int c[1001]={0};
	    for(int i=0;i<a;i++){
	        cin>>b[i];
	        c[b[i]]++;
	        ans=max(ans,c[b[i]]);
	    }
	    cout<<a-ans<<"\n";
	}
	return 0;
}
