// Write your code here
#include <iostream>
using namespace std;


int main() {
    int n;


    Validate_pattern:  cin >> n;
    string village[n];
    string pattern;

    for (int i = 0; i < n; ++i) {
        cin >> pattern;
        village[i]= pattern;
    }
    for (int j = 0; j <n ; j++) {
        if (village[j] != "H" && village[j] != ".") {
            cout << "Enter valid pattern";
            goto Validate_pattern;
        }
        cout << village[j];

    }
    cout<<endl;
    for (int x = 0; x < n; x++) {
        if (village[x] == ".") {
            cout << "YES" <<endl;
            break;
        }
        if (village[n-1]!="."){
            cout<<"NO"<<endl;
    }

    for (int k = 0; k <n ; ++k) {
        if(village[k]==".")
        {
            village[k] = "B";
        }
        cout  << village[k];
    }}