#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    answer.push_back(-1);
    answer.push_back(-1);
    for(int i = 0; i < array.size(); i++){
        if(array[i] > answer[0]){
            answer[0] = array[i];
            answer[1] = i;
        }
    }
    return answer;
}