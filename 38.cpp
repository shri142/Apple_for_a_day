#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    
	    // changing k negative elemnts to positive one if negative elements exist 
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0 || k<=0){
	            break;
	        }
	        else{
	            arr[i]=((-1)*arr[i]);
	            k--;
	        }
	    }
	    sort(arr, arr+n);
	    
	    long long sum=0;
	    for(int i=n-1; i>=0; i--){
	        if(arr[i]<=0){
	            break;
	        }
	        else{
	            sum= sum+arr[i];
	        }
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
