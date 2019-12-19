#include <iostream>
using namespace std;
int main() {
    int N,M;
    cin>>N>>M;
    int arr[N][M];
    for (int i = 0; i <N ; i++) {
        for (int j = 0; j <M ; j++) {
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int outarr[M][N];
    for (int k = 0; k < M; k++) {
        for (int i = 0; i <N ; i++) {
            outarr[k][i]=arr[i][k];
            cout<<outarr[k][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
