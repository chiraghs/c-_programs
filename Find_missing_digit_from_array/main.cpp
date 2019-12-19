#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[]={};
    cin>>n;
    for (int i = 0; i <n ; i++) {
        cin>>arr[i];
    }
    for (int j = 0; j <n ; j++) {
        for (int i = 0; i <n ; i++) {
            if(j==arr[i])
                continue;
            if (i==n-1 && j!=arr[i] ) {
                cout << i;
            }
        }
    }
    return 0;
}
