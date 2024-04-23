#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int flag = 0;
	for (char c : s) {
		if (c == '(') ++flag;
		else --flag;
		if (flag < 0)
			return false;
	}
	if (flag == 0) return true;
	else return false;
}