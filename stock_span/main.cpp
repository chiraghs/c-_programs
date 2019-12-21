#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int T;
cout<<"Enter the number of test cases: ";
cin>>T;

    for (int i = 0; i <T ; i++) {
        int n;
        cout<<"Enter the number of days : ";
        cin>>n;
        cout<<"Enter the price of each days elements : "<<endl;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin>>arr[i];
        }
    int span[n];
        span[0]=1;
        for (int k = 0; k <n ; k++) {
            for (int j = 0; j <k-1 ; j++) {
                if (arr[k]>=arr[j]){
                    span[k]++;
                }
            }

        }
        for (int l = 0; l <n ; ++l) {
            cout<<span[l];
        }

    }

}
