#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    while (bin1.size() != bin2.size()) {
        if (bin1.size() > bin2.size()) bin2.insert(0, "0");
        else bin1.insert(0, "0");
    }
    bool c = false;
    for (int i = bin1.size() - 1; i >= 0; i--) {
        if (bin1[i] == '1' && bin2[i] == '1') {
            if (c) answer.insert(0, "1");
            else {
                answer.insert(0, "0");
                c = true;
            }
        }
        else if (bin1[i] == '1' || bin2[i] == '1') {
            if (c) {
                answer.insert(0, "0");
            }
            else {
                answer.insert(0, "1");
            }
        }
        else {
            if (c) {
                answer.insert(0, "1");
                c = false;
            }
            else answer.insert(0, "0");
        }
    }
    if (c) answer.insert(0, "1");
    return answer;
}