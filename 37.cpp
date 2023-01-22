#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int n,x,y;
         cin>>n;
         set<int> s1,s2;
         for(int i=0;i<n;i++){
             cin>>x>>y;
             s1.insert(x);
             s2.insert(y);
         }
         int ans=s1.size()+s2.size();
         
         cout<<ans<<endl;
     }
	return 0;
}
