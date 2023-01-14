#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t; 
  for(int i=0;i<t;i++)
  {
    int n{0},w{0}; int temp=0,sum=0,sum1=0,c=0;;
    cin>>n>>w;
    int a[n];
    for(int j=0;j<n;j++)
    {
      cin>>a[j];
    }

    for(int j=0;j<n;j++)
    {
      sum1 += a[j];;
    }
 // cout<<"Total sum of arrays "<<sum1<<endl;
    for(int k=0;k<n;k++)  //sorting
    {
      for(int l=0;l<n-1;l++)
      { 
        if(a[l]>a[l+1])
        {
        temp= a[l];
        a[l]=a[l+1];
        a[l+1]=temp;
        }
      }
    }
    /*for(int j=0;j<n;j++)
    {
      cout<<a[j];;
    }*/
    for(int j=n-1;j>=0;j--)
    {
      sum+= a[j];
      c++;
      if(sum>=w)
      {
        break;
      }
    }

    cout<<n-c<<endl;
  }
}
