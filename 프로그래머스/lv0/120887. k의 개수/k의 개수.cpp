#include <string>
#include <vector>

using namespace std;

int solution(int min, int max, int find) {
    int answer = 0;
    for(int i = min; i <= max; i++){
        int temp = i;
        for(temp; temp >= 1; temp /= 10){
            if(temp % 10 == find) answer ++;
        }
    }
    return answer;
}