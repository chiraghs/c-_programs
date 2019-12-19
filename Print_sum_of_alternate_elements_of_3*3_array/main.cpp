#include <iostream>
using namespace std;
int main() {
    int arr[9],sum_even=0,sum_odd=0;
cout<<"Enter Elements of Array"<<endl;
    for (int i = 0; i <9 ; i++) {
         cin>>arr[i];
         if(i%2==0){
             sum_even=sum_even+arr[i];
         }
         if(i%2!=0){
             sum_odd=sum_odd+arr[i];
         }
    }
cout<<endl<<"The summ of alternate elements of the array is"<<endl;
    cout<<sum_even<<endl;
    cout<<sum_odd<<endl;

    return 0;
}
