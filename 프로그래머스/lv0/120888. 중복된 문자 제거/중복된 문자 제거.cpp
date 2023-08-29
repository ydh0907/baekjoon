#include <string>
#include <vector>

using namespace std;

string solution(string mystring) {
    string answer = "";
    for(int i = 0; i < mystring.length(); i++){
        bool isStop = false;
        for(int j = 0; j < answer.length(); j++){
            if(answer[j] == mystring[i]) isStop = true;
        }
        if(!isStop) answer += mystring[i];
    }
    return answer;
}