#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.size(); i++){
        switch(my_string[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': my_string.erase(i--, 1); break;
        }
    }
    return my_string;;
}