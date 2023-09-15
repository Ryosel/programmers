#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int operand1 = 0;
    int operand2 = 0;
    int answer = 0;
    
    for(int i = 0; i < binomial.size(); i++){
        switch(binomial[i]){
            case '+':
                operand1 = stoi(binomial.substr(0, i - 1));
                operand2 = stoi(binomial.substr(i+1, binomial.size() - 1));
                answer = operand1 + operand2;
                break;
                
            case '-':
                operand1 = stoi(binomial.substr(0, i - 1));
                operand2 = stoi(binomial.substr(i+1, binomial.size() - 1));
                answer = operand1 - operand2;   
                break;

            case '*':
                operand1 = stoi(binomial.substr(0, i - 1));
                operand2 = stoi(binomial.substr(i+1, binomial.size() - 1));
                answer = operand1 * operand2;   
                break;        
        }
    }
    return answer;
}