#include <iostream>
using namespace std;
int main() {
    int l,r,k,res=0;
    cin>>l>>r>>k;
    for (int i = min(l,r); i <=max(l,r) ; i++) {
        if (i % k == 0) {
            res++;
        }
    }


    cout <<res;
}
