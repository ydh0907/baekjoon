#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int result;
    if(0 < angle && angle < 90) result = 1;
    else if(angle == 90) result = 2;
    else if(angle == 180) result = 4;
    else result = 3;
    return result;
}