//didnt work plz check it ....problem statement is of making array a permutation
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
// 	cin>>n;
	
// 	for(int i=0;i<n;i++){
	    
// 	    int N;
// 	    int A[N];
// 	    int counter=0;
	    
// 	    int size = sizeof(A) / sizeof(A[0]);
	    
// 	    for(int j=0;j<N;j++){
// 	        cin>>A[j];
// 	    }
	    
// 	    //sorting array 
	    
// 	    sort(A,A+N, greater<int>());
	    
	    
// 	    for(int k=0;k<N;k++){
	        
// 	        if(A[k]>(N-k)){
// 	            cout<<-1<<endl;
// 	            break;
// 	        }
// 	       else{
// 	           counter=counter+(N-k)-A[k];
	          
// 	       }
// 	    }
	    
// 	    cout<<counter<<endl;
	    
	 
	    
// 	}
	
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int s,i;
	    cin>>s;
	    int a[s];
	    for(i=0;i<s;i++)
	    cin>>a[i];
	    sort(a,a+s);
	    int sum=0;
	    for(i=0;i<s;i++)
	    {
	        if(a[i]>i+1)
	        {
	            sum=-1;
	            break;
	        }
	        else
	        sum=sum+abs(i+1-a[i]);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

