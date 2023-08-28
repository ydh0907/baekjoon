#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string o = "";
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) o += '*';
        o += "\n";
    }
    cout << o;
    return 0;
}