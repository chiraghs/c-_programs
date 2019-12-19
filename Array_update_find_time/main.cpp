#include <iostream>
using namespace std;

int main() {
    int T,N,K;

    cout<<"Enter number of test cases"<<endl;cin>>T;
    for (int j = 0; j <T ; j++) {

        cout<<"Enter Array Size and Check Number"<<endl;cin>>N>>K;
        cout<<"Enter the elements of the array"<<endl;
        int l[N];
        for (int i = 0; i <N ; i++) {
            cin>>l[i];
            }

        int  small=l[0];
        for (int k = 0; k < N; k++) {
            if (small>l[k]){
                small=l[k];
            }
        }
        int sum=0;
       while (small<K){
           sum++;
           K--;
       }
        cout<<sum<<endl;
    }

}
