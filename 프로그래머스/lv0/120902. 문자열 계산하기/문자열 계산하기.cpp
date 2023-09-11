#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int j;
    bool isPlus = true;
    string num = "";
    for (int i = 0; i < my_string.size(); i++) {
        auto a = my_string[i];
        if (a == ' ') continue;
        else if (a == '+') isPlus = true;
        else if (a == '-') isPlus = false;
        else if (my_string[i + 1] != ' ' && i != my_string.size() - 1) {
            num += a;
        }
        else {
            num += a;
            j = 1;
            while (num.size() > 0) {
                if(isPlus) answer += (num[num.size() - 1] - '0') * j;
                else answer -= (num[num.size() - 1] - '0') * j;
                num.erase(num.size() - 1);
                j *= 10;
            }
        }
    }
    return answer;
}