#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(0);
    int count = 0;
    while (n > 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                if (answer[count] != i) {
                    answer.push_back(i);
                    count++;
                }
                n /= i;
                break;
            }
        }
        if (answer.size() <= 0) {
            answer.push_back(n);
            break;
        }
    }
    answer.erase(answer.begin());
    return answer;
}