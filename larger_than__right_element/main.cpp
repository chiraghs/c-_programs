    #include <iostream>
    using namespace std;



    int main() {
      int n,arr[10000],t;
      cin>>n;
        for (int i = 0; i <n ; ++i) {
            cin>>arr[i];
        }
        int k=0;
        element:
        while(k<n) {
            t=arr[k];
            k++;
            goto check;
        }

        check:
        for (int j = j+1; j <n ; j++) {

            if (t>arr[j]){
                cout<<arr[j]<<" ";
            }
        }
        if(k=n) {
            goto element;
        }
        return 0;
    }
