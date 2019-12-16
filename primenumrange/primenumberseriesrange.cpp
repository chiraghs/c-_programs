#include <iostream>

using namespace std;


int addtoarray(int num){
    cout << num << " " ;
}



int check_prime(int num){
    int res;
    for (int i = 2; i <=num/2; i++) {
        res = num % i;
        if(res==0)
        {
            break;
        }
        if(i==num/2 && res!=0)
        {
            addtoarray(num);
        }
    }



}



int main() {
    int number;
    cout << "to print a prime number series till number N \n Enter the number" << endl;
    cin >> number;
    addtoarray(2);
    addtoarray(3);
    for (int i = 2; i < number; i++) {
        check_prime(i);
    }

    return 0;
}
