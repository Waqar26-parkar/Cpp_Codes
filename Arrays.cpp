//This is fo fibbo sum

#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    sum = t1 + t2; // initialize sum with the first two terms

    nextTerm = t1 + t2;

    while(nextTerm <n) {
        cout << nextTerm << ", ";
        sum += nextTerm; // add each term to the sum
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << endl << "Total sum: " << sum << endl;
    return 0;
}
