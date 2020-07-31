/*
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer N
Output Format :
Number of zeros in N
Constraints :
0 <= N <= 10^9
Sample Input 1 :
10204
Sample Output 1 :
2
Sample Input 2 :
708000
Sample Output 2 :
4
*/




#include <iostream>
using namespace std;

int countZeros(int n) {
	if(n == 0)
		return 1;

    if(n/10 == 0) // checks if the number has ended i.e., no digits left
        return 0;

    int smallAns = countZeros(n/10);

    return (n%10 == 0) ? smallAns+1 : smallAns;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
