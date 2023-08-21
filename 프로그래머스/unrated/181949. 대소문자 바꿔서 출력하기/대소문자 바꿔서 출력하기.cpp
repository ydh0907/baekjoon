#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        char a = str[i];
        if(islower(a)) a = toupper(a);
        else a = tolower(a);
        str[i] = a;
    }
    cout << str;
    return 0;
}