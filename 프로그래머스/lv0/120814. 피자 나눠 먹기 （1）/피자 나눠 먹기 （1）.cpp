#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp = 0;
    while(temp < n){
        temp += 7;
        answer++;
    }
    return answer;
}