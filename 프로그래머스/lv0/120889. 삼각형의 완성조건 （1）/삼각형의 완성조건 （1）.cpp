#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int most = sides[0] > sides[1] ? sides[0] > sides[2] ? sides[0] : sides[2] : sides[1] > sides[2] ? sides[1] : sides[2];
    vector<int>::iterator iter = find(sides.begin(), sides.end(), most);
    most = distance(sides.begin(), iter);
    int a = 0;
    for(int i = 0; i < 3; i++)
        if(i != most) a += sides[i];
    if(sides[most] < a) return 1;
    return 2;
}