#include <iostream>

int main() {
    std::string word;
    std::cin >> word;
    for (int i = 0; i <word.length() ; i++) {
        if(!(word[i]==word[word.length()-i-1])){
            std::cout << "NO";
            break;
        }
        if(i=word.length()){
        std::cout<<"YES";}
    }

    return 0;
}
