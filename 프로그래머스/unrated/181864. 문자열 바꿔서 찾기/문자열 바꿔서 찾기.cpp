#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string ansStr = myString;
    int answer = 0;
    
    for(int i = 0; i < ansStr.size(); i++){
        if(ansStr[i] == 'A'){
            char ch = 'B';
            swap(ansStr[i], ch);  
        }
        else if(ansStr[i] == 'B'){
            char ch = 'A';
            swap(ansStr[i], ch);                 
        }
    }
    if(ansStr.find(pat) != string::npos) answer = 1;
    return answer;
}