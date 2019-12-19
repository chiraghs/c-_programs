#include <iostream>
using namespace std;

int main() {
  int T,N;

    cout<<"Enter number of test cases"<<endl;cin>>T;
    for (int j = 0; j <T ; j++) {
        int large=0,sum=0;
        cout<<"Enter Number of sides"<<endl;cin>>N;
        cout<<"Enter the lengths of each side"<<endl;
        for (int i = 0; i <N ; i++) {
            int l[N];
            cin>>l[i];
            large=l[0];
            if (large<l[i]){
                large=l[i];
            }
            sum=sum+l[i];
        }
        if (sum-large>large){
            cout<<"YES"<<endl;
        }
        if(sum-large<large){
            cout<<"NO"<<endl;
        }
    }

}
