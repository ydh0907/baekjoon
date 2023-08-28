#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    while(age >= 1){
        switch(age % 10){
            case 0: answer.insert(0, 1, 'a'); break;
            case 1: answer.insert(0, 1, 'b'); break;
            case 2: answer.insert(0, 1, 'c'); break;
            case 3: answer.insert(0, 1, 'd'); break;
            case 4: answer.insert(0, 1, 'e'); break;
            case 5: answer.insert(0, 1, 'f'); break;
            case 6: answer.insert(0, 1, 'g'); break;
            case 7: answer.insert(0, 1, 'h'); break;
            case 8: answer.insert(0, 1, 'i'); break;
            case 9: answer.insert(0, 1, 'j'); break;
        }
        age /= 10;
    }
    return answer;
}