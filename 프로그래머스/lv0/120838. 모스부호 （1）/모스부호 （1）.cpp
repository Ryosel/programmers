#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {

    map<string, string> morse = { 
    {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
    {"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
    {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
    {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
    {"-.--","y"},{"--..","z"}
    };
    
    string answer = "";
    vector<string> tokens;
    
    string temp = "";
    for(int i = 0; i < letter.size(); i++){
        if(isspace(letter[i]) != 0 && temp.size() > 0){
            tokens.push_back(temp);
            temp = "";
        }
        else{ temp += letter[i]; }
    }
    tokens.push_back(temp);
    
    for(int k = 0; k < tokens.size(); k++)
        answer += morse.find(tokens[k])->second; //access to map's value(second element)
    
    return answer;
}