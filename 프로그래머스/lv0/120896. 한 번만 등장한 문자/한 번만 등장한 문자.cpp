#include <string>
#include <vector>

using namespace std;

string solution(string str) {
    string answer = "";
    vector<int> a = vector<int>(26);
    for (int i = 0; i < str.size(); i++) {
        a[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == 1) answer += (char)('a' + i);
    }
    return answer;
}