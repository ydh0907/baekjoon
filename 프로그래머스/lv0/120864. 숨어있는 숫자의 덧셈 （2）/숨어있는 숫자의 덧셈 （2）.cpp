#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    for(int i = 0; i < my_string.length(); i++){
        if('0' <= my_string[i] && my_string[i] <= '9'){
            temp += my_string[i];
        }
        else{
            int ja = 1;
            while(temp.length() > 0){
                answer += (temp[temp.length() - 1] - '0') * ja;
                temp.pop_back();
                ja *= 10;
            }
        }
    }
    int ja = 1;
    while(temp.length() > 0){
        answer += (temp[temp.length() - 1] - '0') * ja;
        temp.pop_back();
        ja *= 10;
    }
    return answer;
}