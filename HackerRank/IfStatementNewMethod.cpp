// making condition through using "expression ? expression: expression"
//method
#include <iostream>
using namespace std;

int main() {
    string s[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int n;
    cin >> n;
    cout << ((1 <= n and n <= 9) ? s[n - 1] : "Greater than 9");
    return 0;
}
