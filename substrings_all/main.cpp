#include <iostream>
using namespace std;
int main() {
   cout<<"Enter the string";
   string s;
   cin>>s;
   int n=s.length();
    for (int i = 0; i <s.length() ; i++) {
        for (int j = 0;j <n+1; j++) {
            cout<<s.substr(i,j)<<endl;
        }
     n--;
    }

    return 0;
}
