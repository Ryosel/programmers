#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0; //count

    for(int i = 0; i < num_list.size(); i++){
        while(num_list[i] != 1){
            answer++;
            if(num_list[i] % 2 == 0) num_list[i] = num_list[i] / 2;
            else num_list[i] = ((num_list[i] - 1) / 2);
        }    
    }
    return answer;
}