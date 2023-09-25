#include <string>
#include <vector>

using namespace std;

string solution(string id) {
    for (int i = 0; i < id.size(); i++) {
        if (id[i] >= 'A' && id[i] <= 'Z') id[i] = tolower(id[i]);
    }
    for (int i = 0; i < id.size(); i++) {
        if ((id[i] >= 'a' && id[i] <= 'z') || (id[i] >= '0' && id[i] <= '9') || id[i] == '-' || id[i] == '_' || id[i] == '.') continue;
        else {
            id.erase(i, 1);
            i--;
        }
    }
    char a = '#';
    for (int i = 0; i < id.size(); i++) {
        if (a == id[i] && a == '.') id.erase(i--, 1);
        a = id[i];
    }
    if (id.size() != 0 && id[0] == '.') id.erase(0, 1);
    if (id.size() != 0 && id[id.size() - 1] == '.') id.pop_back();
    if (id == "") id = "a";
    if (id.size() >= 16) {
        id.erase(15);
        if (id[id.size() - 1] == '.') id.pop_back();
    }
    if (id.size() <= 2) {
        while (id.size() != 3) {
            id.push_back(id.back());
        }
    }
    return id;
}