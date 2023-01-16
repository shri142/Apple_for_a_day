// Prime Number or not

#include<iostream>
using namespace std;

int main()
{
  int num;
  int flag = 0;
  cout<<"Enter a number";
  cin>>num;
  for(int i = 2; i < num; i++)
  {
    if(i%2==0)
    {
      flag = 1; 
    }
  }
  if(flag==1)
  {
    cout<<"Non-Prime Number";
  }
  else
  {
    cout<<"Prime Number";
  }
  return 0;
}
