#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return static_cast<int>(static_cast<float>(num1) / static_cast<float>(num2) * 1000);
}