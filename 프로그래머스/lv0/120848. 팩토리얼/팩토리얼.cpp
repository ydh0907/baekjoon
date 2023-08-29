#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(answer; n > 0; answer++){
        n /= answer;
    }
    return answer - 2;
}