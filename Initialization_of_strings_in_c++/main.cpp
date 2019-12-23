#include <iostream>
#include <vector>

using namespace std;
int main() {

    //Initialization methods of strings
    char str[]="RC";
    char stra[6]="RCB";
    string team="RCB";
    cout<<str<<"\n"<<stra<<"\n"<<team<<endl;


    char strb[]={'R','C','B','I','A','N'};//character array
    cout<<strb<<endl;

    char strc[]={'R','C','B','I','A','N','\0'};//string,this is preferred as memory is not specified
    char strd[7]={'R','C','B','I','A','N','\0'};//string
    cout<<strc<<"\n"<<strd<<"\n";



    char teams[4][6]={"RCB","CSk","INDIA","KXIP"};
    // 4 strings of maximum lenght 6 i.e,"INDIA\0"-6 length. Insertion of one more element,or string of length more than 6 leads to error
    //use of single inverted commas '' leads to error
    for (int i = 0; i < 4; i++) {
        cout<<teams[i]<<endl;
    }




    vector<string> colour;
    colour.push_back("BLUE"); //use of single inverted commas '' leads to error
    colour.push_back("RED");
    for (int j = 0; j <colour.size() ; j++) {
        cout<<colour[j]<<endl;
    }


    return 0;
}
