#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int count = 0;
    for(int i = 100000; i >= 1; i /= 10){
        if(i > num && num != 0) continue;
        count++;
        if(num / i == k) return count;
        num %= i;
    }
    return -1;
}