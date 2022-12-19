#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
{
    int n,ans=0;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    cin>>x[i];
    for(int i=0;i<n;i++)
    cin>>y[i];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(x[i]>=y[i])
            ans++;
        }
        else if(x[i]-x[i-1]>=y[i])
        ans++;
    }
    cout<<ans<<endl;
}
	return 0;
}
