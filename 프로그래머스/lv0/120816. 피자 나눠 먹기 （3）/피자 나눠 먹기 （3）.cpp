#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int temp = 0;
    while(temp < n){
        temp += slice;
        answer++;
    }
    return answer;
}