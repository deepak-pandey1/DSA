#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to add commas to a number (as a string)
string addCommas(int num) {
    string temp = to_string(num);
    string ans;
    int i = temp.size()-1;
    int count = 0;

    while(i >= 0){
        if(count == 3){
            count = 0;
            ans += ',';
        }
        else{
            count++;
            ans += temp[i];
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

// Function to count commas in numbers from 1 to N
int countCommas(int N) {
    int totalCommas = 0;  // Store total commas

    // Loop through numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        string formattedNumber = addCommas(i);  // Format number with commas
        
        // Count commas in the formatted number
        for (char ch : formattedNumber) {
            if (ch == ',') {
                totalCommas++;  // Increase count if a comma is found
            }
        }
    }

    return totalCommas;  // Return total comma count
}

int main() {
    int N;  // Declare a variable for user input
    cout << "Enter a number: ";
    cin >> N;  // Get input from user

    int result = countCommas(N);  // Get comma count
    cout << "Total commas used: " << result << endl;  // Print result

    return 0;
}

/*
summary:
Step1: create Function to add commas to a number (as a string)Step1: create Function to add commas to a number (as a string)
Step2: create Function to count commas in numbers from 1 to N(by 2 loops);

*/