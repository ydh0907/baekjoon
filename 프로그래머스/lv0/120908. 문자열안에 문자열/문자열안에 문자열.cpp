#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    for(int i = 0; i < str1.length() - (str2.length() - 1); i++){
        if(str2 == str1.substr(i, str2.length())) return 1;
    }
    return 2;
}