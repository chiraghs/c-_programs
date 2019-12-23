#include <iostream>
using namespace std;
int main() {
    string Num;

   cout<<"Enter the number"<<endl;
   cin>>Num;


        int point=Num.find(".");
        if(point==string::npos){
            cout<<"No Decimal Part";
        } else{
            cout<<"Decimal part of number is : "<<Num.substr(point+1);
        }

    return 0;
}
