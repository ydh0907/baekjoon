#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct S {
    string name;
    int day, mon, year;
};

int main()
{
    int i;
    cin >> i;
    vector<S> a;
    S temp;
    for (i; i > 0; i--) {
        cin >> temp.name;
        cin >> temp.day;
        cin >> temp.mon;
        cin >> temp.year;
        a.push_back(temp);
        for (int j = a.size() - 1; j > 0; j--) {
            if (a[j].year > a[j - 1].year) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else if (a[j].year == a[j - 1].year) {
                if (a[j].mon > a[j - 1].mon) {
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
                else if (a[j].mon == a[j - 1].mon) {
                    if (a[j].day > a[j - 1].day) {
                        temp = a[j];
                        a[j] = a[j - 1];
                        a[j - 1] = temp;
                    }
                    else {
                        break;
                    }
                }
                else {
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    cout << a[0].name << endl << a.back().name;
    return 0;
}