#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int lo = sides[0] > sides[1] ? sides[0] : sides[1];
    int sh = sides[0] < sides[1] ? sides[0] : sides[1];
    for (int i = lo - sh + 1; i < lo + sh; i++) answer++;
    return answer;
}