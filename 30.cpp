#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ int n,i;
	  cin>>n;
	  int a[n];
	  for(int i=0;i<n;i++)
	  { cin>>a[i];
	  }
	  for( i=n-1;i>=0;i--)
	  { if(a[i]>=1&&a[i]<=7)
	    break;
	  }
	  cout<<i+1<<endl;
	}
	return 0;
}
