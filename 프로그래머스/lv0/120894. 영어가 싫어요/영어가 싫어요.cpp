#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> nums = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string temp = "";
    for (long long i = numbers.size() - 1, k = 1; i >= 0; i--) {
        string a = "";
        a += numbers[i];
        temp.insert(0, a);
        for (int j = 0; j < 10; j++) {
            if (nums[j] == temp) {
                answer += j * k;
                temp = "";
                k *= 10;
            }
        }
    }
    return answer;
}