/*
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/




#include <iostream>
using namespace std;


bool helper(char *s, int start, int end) {

    if(start-end >= 0)
        return true;

    if(s[start] == s[end]) {
        return helper(s, start+1, end-1);
    }
    return false;
}

bool checkPalindrome(char input[]) {
	int size = 0;
    while(input[size] != '\0') {
        size ++;
    }
    return helper(input, 0, size-1);
}



int main() {
    char input[50];
    cin >> input;

    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
