#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
	 int a[n];
	 for(int i=0;i<n;i++){
	  cin>>a[i];
	     
	 }
     int count=1;
	  sort(a,a+n);
	  for(int j=0;j<n-1;j++){
	   if(abs(a[j]-a[j+1])>1){
	       count=0;
	       break;
	   }
	   else count=1;
	   
	      
	  }
	  if(count==1){cout<<"YES"<<endl;}
	  else {cout<<"NO"<<endl;}
	 
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  solve(); 
	}
	return 0;
}
