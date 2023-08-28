#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int count = 0;
    for(int i = 100000; i >= 1; i /= 10){
        if(i > order && order != 0) continue;
        if(order / i == 3 || order / i == 6 || order / i == 9) count++;
        order %= i;
    }
    return count;
}