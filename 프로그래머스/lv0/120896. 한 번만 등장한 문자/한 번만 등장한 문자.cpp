#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> nums;
    nums.resize(26, 0);
    for(int i = 0; i < s.length(); i++){
        nums[s[i] - 'a']++;
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1) answer += 'a' + i;
    }
    return answer;
}