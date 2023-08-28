#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    for(int i = 0; i < array.size() - 1; i++){
        for(int i = 0; i < array.size() - 1; i++){
            if(array[i] < array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    int answer = array[static_cast<int>(array.size() / 2)];
    return answer;
}