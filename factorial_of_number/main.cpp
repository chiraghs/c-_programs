#include <iostream>
using namespace std;
int main() {
    int N;
    cin >>  N;
    int res=N;
    while (N>1){
     res=res*(N-1);
    N--;
    }
    cout << res;
}
