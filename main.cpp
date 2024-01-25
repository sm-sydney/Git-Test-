#include <iostream>
using namespace std;
//comment to see git diff 
int sum (int n){
  int total = 0;

  for (int i = 1; i <=n; i++){
    total += i;
  }

  return total;
}

int product (int x){
  int total = 1;

  for (int i = 1; i <=x; i++){
    total *= i;
  }

  return total; 
}

int main (){
  int n;
  cout << "Enter a number for sum: ";
  cin >> n;

  int count = sum(n);

  cout << count << endl; 

  int x;
  cout << "Enter a number for product: ";
  cin >> x;

  int times = product(x);

  cout << times << endl;
  
  return 0; 


}
