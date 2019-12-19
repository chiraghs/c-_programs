#include <iostream>
using namespace std;
int main() {
    int n,a[100000],b[100000],c[100000];
    cin>>n;
    for (int i = 0; i <n ; i++) {
        cin>>a[i];
    }

    cout<<endl;

    for (int i = 0; i <n ; i++) {
        cin>>b[i];
    }

    for (int j = 0; j <n ; j++) {
        c[j]=a[j]+b[j];
        cout<<c[j]<<" ";
    }
    return 0;
}
