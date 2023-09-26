#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string a;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            if (a[i] < 'N') a[i] += 13;
            else a[i] -= 13;
        }
        else if (a[i] >= 'a' && a[i] <= 'z') {
            if (a[i] < 'n') a[i] += 13;
            else a[i] -= 13;
        }
    }
    cout << a;
    return 0;
}