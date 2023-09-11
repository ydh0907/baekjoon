#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string input) {
    string num = "";
    string word = "";
    int answer = 0;
    vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= '0' && input[i] <= '9') num += input[i];
        else {
            word += input[i];
            for (int j = 0; j < nums.size(); j++) {
                if (word == nums[j]) {
                    int index = find(nums.begin(), nums.end(), word) - nums.begin();
                    num += '0' + index;
                    word = "";
                }
            }
        }
    }

    for (int i = 1; num.size() > 0; i *= 10) {
        answer += (num[num.size() - 1] - '0') * i;
        num.erase(num.size() - 1);
    }
    return answer;
}