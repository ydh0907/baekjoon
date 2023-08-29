#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    
    int a = 1;
    for(int i = 0; i < letter.length(); i++){
        if(letter[i] == ' ') a++;
    }
    
    string letters[a];
    for(int i = 0, j = 0; i < letter.length(); i++){
        if(letter[i] == ' '){
            j++;
            continue;
        }
        letters[j] += letter[i];
    }
    
    string str[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < 26; j++){
            if(str[j] == letters[i]) answer += 'a' + j;
        }
    }
    return answer;
}