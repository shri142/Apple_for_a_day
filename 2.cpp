#include <iostream>
using namespace std;
int main(){
    int n;
      cin>>n;
      
      for(int i=0;i<n;i++){
          
          int chef;
          int chefina;
          int pavle;
          int total_pavle;
          int bhagakar;
          int output;
          
          cin>>chef>>chefina>>pavle;
          
          if(chef>chefina){
              total_pavle=chef-chefina;
          }else{
              total_pavle=chefina-chef;
          }
           output= total_pavle/pavle; 
          
          if(total_pavle%pavle==0){
            
             cout<<output<<endl;
              
          }else{
              output=output+1;
              cout<<output<<endl;
          }
          
          
          
      }
	return 0;
}
