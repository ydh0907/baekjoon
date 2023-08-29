#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    for(int i = 0; i < before.length() - 1; i++){
        for(int j = 0; j < before.length() - 1; j++){
            if(before[j] > before[j + 1]){
                string temp = "";
                temp += before[j];
                before[j] = before[j + 1];
                before[j + 1] = temp[0];
            }
        }
    }
    for(int i = 0; i < after.length() - 1; i++){
        for(int j = 0; j < after.length() - 1; j++){
            if(after[j] > after[j + 1]){
                string temp = "";
                temp += after[j];
                after[j] = after[j + 1];
                after[j + 1] = temp[0];
            }
        }
    }
    if(before == after) return 1;
    return 0;
}