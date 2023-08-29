#include <string>
#include <vector>

using namespace std;

int ABS(int a, int b, int n);
int solution(vector<int> array, int n) {
    int answer = -100;
    for(int i = 0; i < array.size(); i++){
        answer = ABS(answer, array[i], n);
    }
    return answer;
}

int ABS(int a, int b, int n){
    int c = a;
    int d = b;
    if(a > n) a = a - n;
    else a = n - a;
    if(b > n) b = b - n;
    else b = n - b;
    if(a == b) return c < d ? c : d;
    return a < b ? c : d;
}