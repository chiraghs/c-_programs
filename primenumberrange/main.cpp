#include <iostream>
using namespace std;

int main() {
  int num;
  int divisors;
  cin >>  num;

    for (int i = 1; i <num ; i++) {
        divisors=0;
        for (int j = 1; j <=i ; j++) {
            if(i%j==0) {
                divisors++;
            }
        }
        if(divisors==2){
                cout<< i << " ";
        }
    }
}
