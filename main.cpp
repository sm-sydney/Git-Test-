#include <iostream>
using namespace std;

int sum (int n){
  int total = 0;

  for (int i = 1; i <=n; i++){
    total += i;
  }

  return total;
}

int main (){
  int n;
  cout << "Enter a number: ";;
  cin >> n;

  int count = sum(n);

  cout << count << endl; 

  return 0; 


}
