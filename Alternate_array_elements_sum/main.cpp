#include <iostream>
using namespace std;

int main() {
    int N,M;
    cout<<"Enter Row Size and Column Size";
    cin>>N>>M;
    cout<<endl;
    int arr[N][M],sum_evenrow=0,sum_evencolumn=0,sum_oddrow=0,sum_oddcolumn=0;
         cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i <N ; i++) {
        for (int j = 0; j <M ; j++) {
            cin>>arr[i][j];
            if(i%2==0){
                sum_evenrow=sum_evenrow+arr[i][j];
            }
            if(i%2!=0){
                sum_oddrow=sum_oddrow+arr[i][j];
            }
            if(j%2==0){
                  sum_evencolumn=sum_evencolumn+arr[i][j];
            }
            if(j%2!=0){
                  sum_oddcolumn=sum_oddcolumn+arr[i][j];
            }
        }
    cout<<endl;
    }

    cout<<"Even Row Sum "<<sum_evenrow<<endl;
    cout<<"Even Column Sum " <<sum_evencolumn<<endl;
    cout<<"Odd Row Sum "<<sum_oddrow<<endl;
    cout<<"Odd Column Sum "<<sum_oddcolumn<<endl;
    return 0;
}
