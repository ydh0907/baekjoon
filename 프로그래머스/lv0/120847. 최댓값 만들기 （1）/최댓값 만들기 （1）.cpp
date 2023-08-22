#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int a = 0;
    int b = 0;
    int temp = 0;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] > a){
            a = numbers[i];
            temp = i;
        }
    }
    for(int i = 0; i < numbers.size(); i++){
        if(i == temp) continue;
        if(numbers[i] > b){
            b = numbers[i];
        }
    }
    int answer = a * b;
    return answer;
}