#include <iostream>
using namespace std;
int main() {
    int l,n;
    cin>>l;
    cin >> n;
    int arrw []={};
    int arrh []={};

    for (int j= 0; j <n ; j++) {
        cin >> arrw[j];
        cin>> arrh[j];
        cout<<endl;
    }

    for (int i = 0; i <n ; i++) {
        cout<<arrh[i]<<arrw[i]<<endl;
        if(arrw[i]>=l && arrh[i]>=l && arrw[i]==arrh[i]){

            cout <<"ACCEPTED"<<endl;
        }
        if(arrw[i]>=l && arrh[i]>=l && arrw[i]!=arrh[i]){
            cout <<"CROP IT"<<endl;
        }
        if(arrw[i]<l || arrh[i]<l){
            cout <<"UPLOAD ANOTHER"<<endl;
        }}

    return  0;
}
