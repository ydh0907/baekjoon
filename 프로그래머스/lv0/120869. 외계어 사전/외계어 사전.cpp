#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for (int i = 0; i < dic.size(); i++) {
        string temp = dic[i];
        int count = 0;
        vector<string> tspell;
        for (int k = 0; k < spell.size(); k++) {;
            tspell.push_back(spell[k]);
        }
        for (int j = 0; j < temp.size(); j++) {
            string word = "";
            word += temp[j];
            for (int k = 0; k < tspell.size(); k++) {
                if (word == tspell[k]) {
                    count++;
                    tspell.erase(tspell.begin() + k);
                    k--;
                    break;
                }
            }
        }
        if (count == spell.size()) return 1;
    }
    return 2;
}