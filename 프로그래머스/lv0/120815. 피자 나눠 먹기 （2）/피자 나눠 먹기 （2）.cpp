#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = 0;
    while(true){
        if(i >= n && i % n == 0) return answer;
        answer++;
        i += 6;
    }
}