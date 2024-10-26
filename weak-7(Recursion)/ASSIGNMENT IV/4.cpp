//------------------------------------------------------->palindrome check RE
#include <iostream>
using namespace std;
bool checkPalindrome(string &s, int start, int end){
    // base case
    if(start >= end){
        return true;
    }
    // process
    if(s[start] != s[end]){
        return false;
    }
    // recusrion call
    return checkPalindrome(s, start+1, end-1);
}
int main()
{
    string s;
    cin>>s;

    cout << checkPalindrome(s, 0, s.size()-1);
    return 0;
}