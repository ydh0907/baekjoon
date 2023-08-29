#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.length(); i++){
        my_string[i] = tolower(my_string[i]);
    }
    for(int i = 0; i < my_string.length() - 1; i++){
        for(int j = 0; j < my_string.length() - 1; j++){
            if(my_string[j] > my_string[j + 1]){
                string temp = "";
                temp += my_string[j];
                my_string[j] = my_string[j + 1];
                my_string[j + 1] = temp[0];
            }
        }
    }
    return my_string;
}