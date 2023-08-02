#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    
    for(int i = code - 1; i < cipher.size(); i += code){
        answer.push_back(cipher[i]);
        //cout << cipher[i];
    }
    return answer;
}