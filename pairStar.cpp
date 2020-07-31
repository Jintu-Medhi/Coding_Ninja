/*
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S
Output format :
Modified string
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a
*/




#include <iostream>
#include<string.h>
using namespace std;


void pairStar(char str[]) {
	if(strlen(str) == 1 || strlen(str) == 0)
        return;

    pairStar(str+1);


    if(str[0] == str[1]) {
        for(int i = strlen(str) + 1; i >= 1; i--) {
            str[i + 1] = str[i];
        }
        str[1] = '*';
    }
    return;
}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
