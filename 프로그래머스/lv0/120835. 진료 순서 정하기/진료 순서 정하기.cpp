#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(int i = 1; i <= emergency.size(); i++) answer.push_back(i);
    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer.size(); j++){
            if(emergency[i] < emergency[j]){
                if(answer[i] < answer[j]){
                    string temp = "";
                    temp += answer[i];
                    answer[i] = answer[j];
                    answer[j] = temp[0];
                }
            }
        }
    }
    return answer;
}