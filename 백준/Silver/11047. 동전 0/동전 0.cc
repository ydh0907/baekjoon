#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int input, price;
    cin >> input >> price;
    vector<int> prices = vector<int>(input);
    int temp, count = 0, result = 0;
    for (int i = 0; i < input; i++) {
        cin >> temp;
        prices[i] = temp;
    }
    for (temp = input - 1; temp >= 0; temp--) {
        while (true) {
            if (result + prices[temp] <= price) {
                result += prices[temp];
                count++;
            }
            else break;
        }
        if (result == price) break;
    }
    cout << count;
    return 0;
}