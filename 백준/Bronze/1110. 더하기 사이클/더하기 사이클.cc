#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if (input < 10) input *= 10;
    int one, ten;
    int temp = input;
    int count = 0;
    do{
        ten = temp / 10;
        one = temp % 10;
        temp = one * 10 + (ten + one) % 10;
        count++;
    } while (input != temp);
    cout << count;
}