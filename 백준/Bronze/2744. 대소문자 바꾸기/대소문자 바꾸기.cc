#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    string str;
    cin >> str;

    string answer = "";
    char temp;
    for(int i = 0; i < str.size(); i++){
        if(islower(str[i])) temp = toupper(str[i]);
        else temp = tolower(str[i]); 
        answer.push_back(temp);
    }

    cout << answer;
    return 0;
}