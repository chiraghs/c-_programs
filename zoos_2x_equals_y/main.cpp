#include <iostream>

int main() {
    std::string word;
    int z_count=0,y_count=0;
    std::cin >> word;
    for (int i = 0; i <word.length() ; i++) {
           if(word[i]=='z'){
               z_count=z_count+2;
           }
           if(word[i]=='o'){
               y_count++;
           }
    }

    std::cout<<z_count<<std::endl;
    std::cout<<y_count <<std::endl;

   if(z_count==y_count){
       std::cout << "YES";
   }
   else{
       std::cout << "NO";
   }
}
