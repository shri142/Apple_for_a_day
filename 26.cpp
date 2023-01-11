// #include <iostream>
// using namespace std;

// int main() {

// int t;
// cin>>t;
//   for(int i=0;i<t;i++){
       
//     //   zero=6,one=2,two=5 , three=5, four=4,five=5,six=6,seven=3,
//     //   eight=7,nine=6,
       
       
//       int A,B,sum=0,ans=0,num;
//       cin>>A>>B;
//       sum=A+B;
       
//       while(sum>0){
//           num=sum%10;
           
//           if(num==0){
//               ans=ans+6;
//           }
//           else if(num==1){
//               ans=ans+2;
//           }
//           else if(num==2){
//               ans=ans+5;
//           }
//           else if(num==3){
//               ans=ans+5;
//           }
//           else if(num==4){
//               ans=ans+4;
//           }
//           else if(num==5){
//               ans=ans+5;
//           }
//           else if(num==6){
//               ans=ans+6;
//           }
//           else if(num==7){
//               ans=ans+3;
//           }
//           else if(num==8){
//               ans=ans+7;
//           }
//           else{
//               ans=ans+6;
//           }
//           sum=sum/10;
//       }
       
//       cout<<ans<<endl;
       
//   }
// 	return 0;
// }

// ans by chatgp


#include<iostream>
using namespace std;


int main(){
    

int t;
cin>>t;

  for(int i=0;i<t;i++){
      
       int a, b, sum, sticks;
    // Take input from the user
   
    cin >> a >>b;
   
    // Calculate the sum
    sum = a + b;
 
    // Calculate the number of matchsticks required to make the sum
    int matchstick_count[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    sticks = 0;
    while (sum > 0) {
        int digit = sum % 10;
        sticks += matchstick_count[digit];
        sum /= 10;
    }
    cout << sticks << endl;
     
      
      
  }

return 0;
}
