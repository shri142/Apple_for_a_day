// #include <iostream>
// #include<stdio.h>
// using namespace std;

// void sort(int *add,int size){
    
//     int temp;
    
//     for(int y=0;y<size;y++){
//         for(int z=y+1;z<size;z++){
            
//             if((*(add+z))< (*(add+y)) ){
//               temp= *(add+z);
//               *(add+z)=*(add+y);
//               *(add+y)=temp;
               
                
//             }
//         }
    
//     }
    
   
    
// }

// int main() {
    
// 	int T;
// 	cin>>T;

// 	for(int i=0;i<T;i++){
// 	    int N,jony;
// 	    cin>>N;
	    
// 	    int songs[N];
// 	    int *p=songs;
	  
// 	    for(int j=0;j<N;j++){
// 	        cin>>songs[j];
	        
// 	    }
// 	    cin>>jony;
	    
// 	   sort(p,N); 
	   
// 	   for(int k=0;k<N;k++){
// 	        if(songs[k]==jony){
// 	            cout<<k+1<<endl;
// 	        }
	        
// 	    }
	 
	  
// 	}
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;cin>>t;
	while(t--){
	   cin>>n;
	   int arr[n+1];
	   int j;
	   for(int i=0;i<n;i++)cin>>arr[i];
	   cin>>k;
	   int m = arr[k-1];
	   sort(arr,arr+n);
	   for(int i=0;i<n;i++) {if( m == arr[i]) j = i;}
	   cout<<j+1<<endl;
	}
	return 0;
}
