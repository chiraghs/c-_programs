#include <iostream>
using namespace std;
int main() {
     int T,N;
     cin>>T;
     cout<<endl;
    for (int i = 0; i <T ; i++) {
        Start_Again:
        cin>>N;
        cout<<endl;
        /*string binary_input[N];
        for (int j = 0; j <N ; j++) {
            cin>>binary_input[j];
            if (binary_input[j].length()!=N){
                cout<< "Enter String of length "<<N<<endl;
                goto Start_Again;
            }
            cout<<endl;
        }*/
        int arr[N][N];
        for (int k = 0; k <N ; k++) {
            for (int j = 0; j <N ; j++) {
                cin>>arr[k][j];
            }
            cout<<endl;
        }
        for (int k = 0; k <N ; k++) {
            for (int j = 0; j <N ; j++) {
                if (arr[k][j]!=arr[j][k]){
                 cout<<"NO";
                } if(k==N-1 && j==N-1 && arr[k][j]==arr[j][k]){
                 cout<<"YES";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
