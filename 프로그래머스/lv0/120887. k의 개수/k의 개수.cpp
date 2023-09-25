#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int count = 0;
    for (int a = i; a <= j; a++) {
        for (int temp = a; temp >= 1; temp /= 10) {
            if (k == temp % 10) count++;
        }
    }
    return count;
}