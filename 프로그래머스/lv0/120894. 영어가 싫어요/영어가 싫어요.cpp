#include <iostream>
#include <vector>

using namespace std;
long long solution(string str) {
    vector<string> a = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string temp = "";
    long long answer = 0;
    for (int i = 0; i < str.size(); i++) {
        temp += str[i];
        for (int j = 0; j < 10; j++) {
            if (temp == a[j]) {
                temp = "";
                answer *= 10;
                answer += j;
            }
        }
    }
    return answer;
}