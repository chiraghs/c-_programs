#include <iostream>
using namespace std;

int main() {
    int N,group_Count=0;
    cout<<"Enter the Total Number Persons in the Queue"<<endl;
    cin>>N;
    cout<<endl;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin>>H[i];
    }

    for (int j = 0; j <N-1 ; j++) {
        if(H[j]>H[j+1]){
            group_Count++;
        }
    }

    if (H[0]<H[N-1]){
        group_Count++;
    }
    cout<<endl<<group_Count;
    return 0;
}
