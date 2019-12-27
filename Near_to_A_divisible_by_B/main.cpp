#include <iostream>
using namespace std;
int main() {
    int A,B,Left=0,Right=0,ta,tb;
    cout<<"Enter two Numbers A & B, to find Near Number for A that is divisible by B"<<endl;
    cin>>A>>B;
    cout<<endl;

    if (A%B==0){
        cout<<A;
    } else{
        ta=A;tb=B;
      while (A%B!=0){
          A--;
          Left=A;
      }
        while (ta%tb!=0){
            ta++;
            Right=ta;

        }

        if(abs(Left)>abs(Right)){
            cout<<Left;
        } else{cout<<Right;}
    }


    return 0;
}
