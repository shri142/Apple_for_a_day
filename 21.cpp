#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 int u,v,a,s,w;
	 while (t--)
	 {
	     cin>>u>>v>>a>>s;
	   
	     if((u*u)-(2*a*s)<=(v*v))
	     {
	         cout<<"yes"<<endl;
	     }
	      else 
	      {
	          cout<<"no"<<endl;
	      }
	 }
	return 0;
}
