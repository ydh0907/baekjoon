#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = price;
    if(price > 499999) answer = price * (80.0 / 100);
    else if(price > 299999) answer = price * (90.0 / 100);
    else if(price > 99999) answer = price * (95.0 / 100);
    return answer;
}