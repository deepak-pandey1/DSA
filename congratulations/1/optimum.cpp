#include <iostream>
using namespace std;

// Function to count commas in numbers from 1 to N
int countCommas(int N) {
    int count = 0;

    // Counting commas for numbers from 1,000 to 999,999
    if (N >= 1000) {
        int rangeEnd = min(N, 999999);
        count += (rangeEnd - 999) * 1; // Each number in this range has 1 comma
    }

    // Counting commas for numbers from 1,000,000 to 999,999,999
    if (N >= 1000000) {
        int rangeEnd = min(N, 999999999);
        count += (rangeEnd - 999999) * 2; // Each number in this range has 2 commas
    }

    // Counting commas for numbers 1,000,000,000 and beyond
    if (N >= 1000000000) {
        count += (N - 999999999) * 3; // Each number in this range has 3 commas
    }

    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; // Taking input from user
    
    cout << "Total commas: " << countCommas(number) << endl;
    return 0;
}

// N = 1,000,000
// 1010