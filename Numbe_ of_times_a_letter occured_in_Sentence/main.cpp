#include <bits/stdc++.h>
using namespace std;

void repeat(string s){
    int arr[26]={0};//let each letter occured zero times at the beginning
    for (int i = 0; i <s.length() ; i++) {
        arr[s[i]-'a']++;//arr[s[2]-a] // corresponds to third element in the string- ascii 'a'
    }
    for (int j = 0; j <26 ; j++) {
        if(arr[j]!=0){
            printf("%c",'a'+j);//to print ascii value
            cout<<" - "<<arr[j]<<endl;
        }
    }
}


int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Number of repeatations of each letter is"<<endl;
    repeat(s);

}