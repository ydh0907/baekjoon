#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    unordered_set<int> set;
    
    for(int i = 0; i < numbers.size(); i++)
        set.insert(numbers[i]);
    
    for(int i = 1; i < 10; i++)
        if(set.find(i) == set.end())
           answer += i;
    
    return answer;
}