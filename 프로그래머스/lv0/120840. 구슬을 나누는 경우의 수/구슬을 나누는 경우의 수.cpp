#include <string>
#include <vector>

using namespace std;
int solution(int balls, int share) {
    unsigned long long int answer = 1;
    int mn = balls - share;
    for (int i = 1, j = 1, k = 1; i <= balls; i++) {
        answer *= i;
        if (j <= mn && answer % j == 0) {
            answer /= j++;
        }
        if (k <= share && answer % k == 0) {
            answer /= k++;
        }
    }
    return answer;
}