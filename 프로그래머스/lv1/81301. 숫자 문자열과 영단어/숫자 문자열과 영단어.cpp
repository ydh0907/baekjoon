#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string input) {
    string num = "";
    string word = "";
    int answer = 0;
    vector<string> nums;
    nums.resize(10);
    nums[0] = "zero";
    nums[1] = "one";
    nums[2] = "two";
    nums[3] = "three";
    nums[4] = "four";
    nums[5] = "five";
    nums[6] = "six";
    nums[7] = "seven";
    nums[8] = "eight";
    nums[9] = "nine";
    
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