#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;

  cin >> t;

  while(t--){
    int a,b,c;
    cin >> a >> b >> c;

    int x = a + b;
    int y = b + c;
    int z = a + c;

    int power = max(x,(max(y,z)));

    cout << power <<endl;
  }

	return 0;
}
