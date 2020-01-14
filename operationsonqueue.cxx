#include <iostream>
#include <queue>
using namespace std;

int main()
{
int N,x;
char oper;
queue<int> q;

cin>>N;

while(N--){
cin>>oper;
if (oper == 'E'){
cin>>x;
q.push(x);
cout<<q.size()<<endl;
} else {

if(!q.empty()) {
int elem = q.front();
q.pop();
cout<<elem<<" "<<q.size()<<endl;
} else
cout<<-1<<" "<<q.size()<<endl;
}

}
return 0;
}