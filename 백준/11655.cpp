#include <iostream>

int main(void) {
    std::string user_input;
    std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string lowercase = "abcdefghijklmnopqrstuvwxyz";

    std::getline(std::cin, user_input, '\n');
  
    for(int i=0; i<user_input.length(); i++) {
        if('A' <= user_input[i] && user_input[i] <= 'M') {
            user_input[i] = uppercase[(user_input[i]-'A')+13];  
        } else if('N' <= user_input[i] && user_input[i] <= 'Z') {
            user_input[i] = uppercase[(user_input[i]-'A')-13];
        } else if('a' <= user_input[i] && user_input[i] <= 'm') {
            user_input[i] = lowercase[(user_input[i]-'a')+13];
        } else if('n' <= user_input[i] && user_input[i] <= 'z') {
            user_input[i] = lowercase[(user_input[i]-'a')-13];
        } else {
            continue;
        }
    }
    
    std::cout << user_input;

    return 0;
}